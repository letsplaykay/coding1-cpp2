// Adventure1_Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {

	cout << "Welcome to the game!\n";

	int health = 10;
	int attack = 0;
	int block = 0;
	int turns = 0;

	srand(time(0));

	do {
		turns += 1;
		cout << "An enemy attacks!\n";
		attack = rand() % 5;
		block = rand() % 5;

		if (block >= attack) {
			cout << "Successful block!\n";
		}
		else {
			cout << "You've been hit for " << attack << " damage!\n";
			health -= attack;
			cout << "Your health is now " << health << ".\n";
		}

		cout << "Would you like to keep adventuring?\n";
		string input;
		getline(cin, input);	// getline allows for spaces, only returns strings though
		stoi(input);			// this gives you an integer from a string
		int age = stoi(input);

		if (input == "no") {
			cout << "Thanks for playing!\n";
			break;
		}

	} while (health > 0 && turns < 4);

	if (health > 0) {
		cout << "Well done! You escaped with your life.\n";
	}
	else {
		cout << "Your body is laying on the side of the road.\n";
		cout << "Your family will miss you.\n";
	}
}
