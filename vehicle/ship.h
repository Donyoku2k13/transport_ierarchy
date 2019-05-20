#pragma once
#include "waterV.h"
class ship :public waterVehicle {
public:
	void start() {
		cout << "vehicle has started on the water\n";
	}
	void setBody(string body) { this->body = body; }
	string getBody()const { cout << this->body; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const { cout << this->typeOfEngine; }
	void getInfo()override { cout << getEngineType() << " " <<" "<<getColor()<<" "<< getBody() << endl; }
};