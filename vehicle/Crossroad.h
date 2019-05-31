#pragma once
#include "vehicle.h"
#include "bike.h"
#include "bus.h"
#include <list>
#include <ctime>
#include <Windows.h>





class crossroad {
	int redLightInSeconds;
	int greenLightInSeconds;
	int cntCarsComesInMinute;
	int cntCarsCrossInMinute;
	list<vehicle*> traffic;
public:
	crossroad(int redLightInSeconds,
		int greenLightInSeconds,
		int cntCarsComesInMinute,
		int cntCarsCrossInMinute) {
		this->redLightInSeconds = redLightInSeconds;
		this->greenLightInSeconds = greenLightInSeconds;
		this->cntCarsComesInMinute = cntCarsComesInMinute;
		this->cntCarsCrossInMinute = cntCarsCrossInMinute;
		srand(time(0));
	}

	void start() {
		while (1) {
			redOn();
			greenOn();
		}
	}

	enum light {
		RED, GREEN
	};

private:
	void redOn() {

		int min = ((double)cntCarsComesInMinute
			- (double)cntCarsComesInMinute / 3)
			/ 60 * redLightInSeconds;
		int max = ((double)cntCarsComesInMinute
			+ (double)cntCarsComesInMinute / 3)
			/ 60 * redLightInSeconds;
		int cntCars = min + rand() % (max - min);//10
		for (size_t i = 0; i < cntCars; i++)
		{
			system("cls");
			traffic.push_back(getRandomVehicle());
			display(RED);
			Sleep((double)redLightInSeconds / cntCars * 1000);
		}

	}
	void greenOn() {
		cntCarsCrossInMinute;
		int min = ((double)cntCarsCrossInMinute
			- (double)cntCarsCrossInMinute / 3)
			/ 60 * greenLightInSeconds;
		int max = ((double)cntCarsCrossInMinute
			+ (double)cntCarsCrossInMinute / 3)
			/ 60 * greenLightInSeconds;
		int cntCars = min + rand() % (max - min);

		for (size_t i = 0; i < cntCars; i++)
		{
			system("cls");
			if (traffic.size() > 0) {
				delete *traffic.begin();
				traffic.pop_front();
			}
			display(GREEN);
			Sleep((double)greenLightInSeconds / cntCars * 1000);
		}
	}
	vehicle* getRandomVehicle() {
		vehicle *v = nullptr;
		int rnd = rand() % 3;
		auto m = models[rand() % 5];
		auto c = colors[rand() % 5];

		switch (rnd)
		{
		case 0:
			v = new car(m, c);
			break;
		case 1:
			v = new bus(m, c);
			break;
		case 2:
			v = new bike(m, c);
			break;
		}

		return v;
	}
	void display(light l) {
		if (l == RED)
			cout << "red";
		else
			cout << "green";
		cout << " light\n------------------\n";
		for (auto i : traffic) {
			i->getInfo();
		}
	}

	string colors[5] = { "red","green","white","black","blue" };
	string models[5] = { "toyota","renault","bmw","mercedes","skoda" };
};
