#pragma once
#include<string>
#include <iostream>
using namespace std;

class vehicle
{

	string color;
	size_t maxSpeed;
	size_t cntPass;
public:
	void setColor(string color) { this->color = color; }
	string getColor()const { return this->color; }
	void setMaxSpeed(size_t maxSpeed) { this->maxSpeed = maxSpeed; }
	size_t getMaxSpeed()const { return this->maxSpeed; }
	void setcntPass(size_t cntPass) { this->cntPass = cntPass; }
	size_t getcntPass()const { return cntPass; }
	virtual void getInfo()const { cout << getcntPass() << " " << getMaxSpeed() << endl; cout << getColor(); }
};












