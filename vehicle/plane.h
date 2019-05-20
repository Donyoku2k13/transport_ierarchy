#pragma once
#include "airV.h"
class plane :public aircraft {
public:
	void start() {
		cout << "vehicle has started on air\n";
	}
	void setBody(string body) { this->body = body; }
	string getBody()const { cout << this->body; }
	void setProp(size_t prop) { this->numOfPropeller = prop; }
	size_t getProp()const { cout << this->numOfPropeller; }
	void setEngine(string engine) { this->typeOfEngine = engine; }
	string getEngineType()const { cout << this->typeOfEngine; }
	void getInfo()override  { cout << getEngineType() << " " << getBody()<<" " << getColor()<< endl; getProp(); }
};