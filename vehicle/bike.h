#pragma once
#include "groundV.h"
class bike : public groundVehicle {
	void start() {
		cout << "vehicle has started on the ground\n";
	}
	void setWheels(size_t wheel) { this->numofWheels = wheel; }
	size_t getWheels()const { return numofWheels; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const { return typeOfEngine; }
	void getInfo()const { cout << getEngineType() << " " << getBody() << " " << getWheels() << endl; }
};
