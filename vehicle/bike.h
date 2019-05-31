#pragma once
#include "groundV.h"
#include "vehicle.h"
class bike :public vehicle {
	string model;
	string color;
public:	
	bike(string model, string color) : vehicle(model, color) {

}
	void start() {
		cout << "vehicle has started on the ground\n";
	}
	
};
