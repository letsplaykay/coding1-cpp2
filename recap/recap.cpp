// Coding 1b Sp25
// Recap Day!

#include <iostream>
#include <string>
#include <ctime>			// for rand()
#include <cstdlib>			// for srand()
#include <vector>			// for vectors, of course
#include <algorithm>
using namespace std;

// this is where the program starts
int main() {
	srand(time(0));
	bool debug = false;		// debug mode is OFF unless the "player" is us
	// have the computer greet you, then run the program
	cout << "Greetings!\n";

	// have the player ask for your name
	cout << "What is your name?\n";
	// use getline to get the player's name
	string input;
	getline(cin, input);


	// use an if statement to check to see if the player's name is YOUR name,
		// and if it is, have the player say "hello creator"
	if (input == "Kay" or "kay") {
		cout << "Hello, creator!\n";
		debug = true;
		if (debug) cout << "Debug mode is ON.\n";
	} 
	// otherwise (else) hace the computer greet the player with the given name
	else {
		cout << "Hello, " << input << "!\n";
	}

	// build a "guess the number" game where the computer picks a random number
	// between 1 and 10 (inclusive)
	// and the player guesses
	// computer then says "Higher", "Lower", or "That's it!"

	// #include <ctime>
	// #include <cstdlib>
	// srand(time(0)); at the beginning of the program
	// then we need a while loop to let the player keep guessing

	if (false) {
		// for setup 
		// pick the random number
		int theNumber = rand() % 10 + 1;	// this number will be 1,2,3,4,5,6,7,8,9,or10
		if (debug) cout << "The number is " << theNumber << ".\n";
		int guess = 0;
		cout << "I'm thinking of a number between 1 and 10 (inclusive).\nCan you guess the number?\n";

		while (guess != theNumber) {
			cout << "What is your guess ? \n >> ";
			getline(cin, input);
			guess = stoi(input);

			if (guess == theNumber) {
				cout << "You guessed it!\n";
				break;
			}

			if (guess > theNumber) {
				cout << "Too high!\n";
			}
			else {
				cout << "Too low!\n";
			}
		}
	} // end of if statement to not run "guess the number" game

	if (true) {
		// start talking about Vectors
		// vectors are resizeable arrays
		
		// don't forget to
		// #inlude <vector>
		// use a collection initializer when creating a new vector (or array) 
		// to automatically add items
		vector<string> favBooks; // { "Warm Bodies", "The Little Prince", "The Kiss Bet" };
		favBooks.push_back("Warm Bodies");
		favBooks.push_back("The Little Prince");
		favBooks.push_back("The Kiss Bet");

		cout << "The first book in my list of favBooks is " << favBooks[0] << ".\n";

		cout << "Please add another book to the list.\n";
		getline(cin, input);

		favBooks.push_back(input);				// adds another element to the end of the vector

		cout << "There are now " << favBooks.size() << " books in the list.\n";
		cout << "The last book in the list is " << favBooks[favBooks.size() - 1] << ".\n";
	
		// useful stuff with vectors, after push_back and variable sizes
		// is #include <algorithm> fir .find() and .sort() and .shuffle()

		cout << "Here is the unsorted list:\n";
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << "\n";
		}

		cout << "Let's sort the list!\n";
		sort(favBooks.begin(), favBooks.end());

		cout << "Here is the sorted list:\n";
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << "\n";
		}
		// ------------------------------------------ new stuff
		cout << "Randomly shuffling the list!\n";
		random_shuffle(favBooks.begin(), favBooks.end());

		cout << "Here is the shuffled list:\n";
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << "\n";
		}

		cout << "Give me a book from the list, and I'll tell you what position it is in the list.\n";
		getline(cin, input);
		vector<string>::iterator iter;							// new kind of variable type called the iterator
		iter = find(favBooks.begin(), favBooks.end(), input);	// they point at a certain spot in the vector

		if (iter != favBooks.end()) {							// if find() went through the whole vector and didn't
			cout << *iter << ".\n";								// find anything, iter will point at vector.end()
		}
		else {
			cout << "That book is not on the list.\n";
		}
	}

}