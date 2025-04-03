// 5FavGames - Coding Week 5

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Hello!\n";

	/*
	create a program that will
	
	Add a game to an array of strings
	Edit the name of the game
	Remove the game
	Show the List
	Quit
	*/

	//create the array of strings
	// create this OUTSIDE of the loop, so it doesn't recreate itself
	string favGames[100];
	int gameCount = 0;
	string input;

	do {
		cout << "What would you like to do?\n";
		cout << "Type 'add', 'edit', 'remove', 'show', or 'quit'\n";
		getline(cin, input);

		// parse the input
		if (input == "add") {
			cout << "Please type the game you would like to add:\n";
			getline(cin, input);
			favGames[gameCount++] = input;
		}
		else if (input == "edit") {
			cout << "What game would you like to edit?\n";
			getline(cin, input);
			// let's try to find that game
			for(int i = 0; i < gameCount; i++) {
				if (favGames[i] == input) {
					cout << "I have found that game. What would you like to change it to?\n";
					getline(cin, input);
					favGames[i] = input;
					cout << "Game has been updated to " << favGames[i] << ".\n";
				}

				if (i + 1 == gameCount) {
					cout << "We got to the end of the list and I couldn't find that game.\n";
				}
			}
		}
		else if (input == "remove") {
			cout << "What would you like to remove?\n";
			getline(cin, input);

			for (int i = 0; i < gameCount; i++) {
				if (favGames[i] == input) {
					cout << "I have found that game. Removing now.\n";
					favGames[i] = "";
					cout << "Game has been removed.\n";
				}

				if (i + 1 == gameCount) {
					cout << "We got to the end of the list and I couldn't find that game.\n";
				}
			}
		}
		else if (input == "show") {
			cout << "Here are your games:\n";
			for (int i = 0; i < gameCount; i++) {

				// if favGames[i] is not blank, display it
				if (favGames[i] != "") {
					cout << favGames[i] << "\n";
				}
			}
		}
		// for an infinite loop, always build the "exit" case immediately
		else if (input == "quit") {
			cout << "Thanks for playing!\n";
			break;
		}
		else {
			cout << "I have no idea what you want. Please try again.\n";
			cout << "Don't use quotes for what you type. Please use all lowercase.\n";
		}

	} while (true);
}
