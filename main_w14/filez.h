#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "ship.h"		// this lets us know what a ship is
using namespace std;

void WriteToFile(string givenString);
void ReadFromFile();
void WriteShipToFile(ship givenShip);
