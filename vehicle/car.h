#pragma once
#include "vehicle.h"
#include "groundV.h"
class car : public vehicle {
public:
	car(string model, string color):vehicle(model,color) {
		
	}
	void start() {
		cout << "vehicle has started on the ground\n";
	}
	
};
