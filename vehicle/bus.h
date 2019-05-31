#pragma once
#include "vehicle.h"
#include "groundV.h"
class bus : public vehicle {
	string model;
	string color;
public:
	bus(string model, string color) :vehicle(model, color) {

	}
	void start() {
		cout << "vehicle has started on the ground\n";
	}
	
};
