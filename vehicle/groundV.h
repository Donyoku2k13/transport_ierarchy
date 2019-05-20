#pragma once
#include "vehicle.h"
class groundVehicle :public vehicle {
public:
	string body;
	size_t numofWheels;
	string typeOfEngine;
	void start() {
		cout << "vehicle has started on the ground\n";
	}
	void  setBody(string body) { this->body = body; }
	string getBody()const { cout << this->body; }
	void setWheels(size_t wheel) { this->numofWheels = wheel; }
	size_t getWheels()const { cout << this->numofWheels; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const { cout << this->typeOfEngine; }
	virtual void getInfo() = 0;
};