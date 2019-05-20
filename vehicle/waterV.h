#pragma once
#include "vehicle.h"
class waterVehicle :public vehicle {
public:
	string body;
	string typeOfEngine;
	void start() {
		cout << "vehicle has started on the water\n";
	}
	void setBody(string body) { this->body = body; }
	string getBody()const { return body; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const { cout << this->typeOfEngine; }
	virtual void getInfo() = 0;
};
