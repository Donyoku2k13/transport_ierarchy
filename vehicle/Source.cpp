#include<string>
#include"vehicle.h"
#include "car.h"
#include <iostream>
using namespace std;

void main() {
	car c;
	c.setColor("black");
	c.setBody("sedan");
	c.setEngine("gas");
	c.setWheels(6);
	c.getInfo();



	system("pause");
}