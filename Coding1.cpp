// Coding1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// WELL DONE!!! SECOND TEST 
// create some variables to tell a story

// WELL DONE! THIRD TEST
// #1 use cin to ask the player what their name is.

// break after this!!

#include <iostream>		// this allows us to send text to and from console
using namespace std;	// this allows (tabs are great) us to not type std all the time

int main()	// this where our program starts
{
	// variables are nicknames for data. 
	// variable type is string, variable name is "name", variable value is "Jinx".
	string name = "Jinx";	// from Arcane
	// variable type is integer, variable name is health, variable value is 45.
	int health = 45;		// range of 0-100

	cout << "My name is " << name << ".\n";		// #1 task, add "I have <health> health.\n";
	// start here
	cout << "I have " <<health<< " health.\n";
	cout << "What is your name?\n";
	string name1 = "Kayli";
	cout << "My name is " << name1 << ".\n";
	cout << "Hello World!\n";	// this line sends text to the console
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
