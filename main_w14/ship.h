#pragma once
#include <string>
#include <iostream>
using namespace std;

// this specifies the different types of ships
enum shipType { FIGHTER, FRIGATE, FREIGHTER, CRUISER };

class ship
{
public:
	string name;
	int fuel;
	shipType type;

	ship();				// the constructor
	void status();		// equivalent to sayHello();
};

