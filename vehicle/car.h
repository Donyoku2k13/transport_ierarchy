#pragma once
#include "groundV.h"
class car : public groundVehicle {
public:
	void start() {
		cout << "vehicle has started on the ground\n";
	}
	void  setBody(string body) { this->body = body; }
	string getBody()const { return body; }
	void setWheels(size_t wheel) { this->numofWheels = wheel; }
	size_t getWheels()const { return numofWheels; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const { return typeOfEngine; }
	void getInfo() override  { cout << getEngineType() << " " << getBody()<<" "<< getColor() << " " << getWheels() << endl; }
};