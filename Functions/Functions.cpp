// Coding1b Week 10 - Functions


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// global variables are dangerous
// global variables exist in all functions in this source file so it's fine
// changing this in one place changes it everywhere
const bool debug = true;                                // change true to false to turn off debug and rid of debug statements


// Functions!
//f(x) = y
//f(input) = output
//f(2) = 4
//f(3) = 6
//f(4) = 9

// all functions have a return type, a name, and (input parameters)
// declaring and defining a new function named "sayHello"
// it has a return type of void, which means it returns nothing
// it has one input parameter named "greeting" with a default value of "Hello!"

void sayHello(string greeting = "Hello!") {             // declare it exists         // must be outside of main
    cout << greeting << "\n";
}

void sayGoodbye(string farewell = "Goodbye!") {
    cout << farewell << "\n";
}

int triple(int givenNumber) {
    if (debug) cout << "[givenNumber: " << givenNumber << ".]\n";                    // [] are just to identify it's a debug statement, not necessary

    return givenNumber * 3;                             // this is the output of the function
}

// function overloading
// function name is "[any word] triple(double givenNumber)"
double triple(double givenNumber) {
    if (debug) cout << "[givenNumber: " << givenNumber << ".]\n";

    return givenNumber * 3;
}

// creating a new function named "getPlayerName"
// return type is string, with two input parameters for minSize and maxSize
string getPlayerName(int minSize = 5, int maxSize = 15) {
    string input;                                       // to store the player's input

    do {
        cout << "What is your name?\n";
        getline(cin, input);

        // data validation
        if (input.size() < minSize) {
            cout << "Your name needs to be at least " << minSize << " characters long.\n";
        }
        else if (input.size() > maxSize) {
            cout << "Your name needs to be fewer than " << maxSize + 1 << " characters.\n";
        }
        else {
            string greeting = "Hello, " + input + "!";  // create a greeting that includes
            sayHello(greeting);                         // the player's name
            return input;                               // output = player's name
        }
    } while (true);
}

// task:
// create a function that returns a number between min and max
// ask the player for a min number, and a max number,
// then use the function to return a random number between those values

// helpful hints
// what will the function return?
// what are the inputs of the function?
// what are the inputs of the function?
// #include <cstdlib>
// #include <ctime>
// srand(time(0)); ... put this in main()
// getline(cin, input);
// int min = stoi(input);
//
// for a random number between min and max: rand() % (max - min) + min;
// int range = (max - min) + 1;
// rand() % + min

int randomNumberInRange(int min = 50, int max = 56) {
    // check to ensure that min is larger than max
        // else return -1 and throw error, or warning message
    if (min >= max) {
        cout << "I can't use those numbers.\n";
        return -1;
    }
    // calculate range
    int range = (max - min) + 1;                // 56 - 50, for example
    // return random number
    return rand() % range + min;                // min = 50, for example
}

bool randomBool() {
    int number = rand() % 10;

    // 50% all of the time
    if (number > 4) {
        return true;
    }
    else
        return false;
}


// create a function that asks for a number between min and max
// and uses............................... ?


/* block comment */
// warm up task - fav food loop
// 1. use a loop to ask the player for their three favorite foods
// 2. add those foods to an array of strings (with a size of 11)
// 3. use a for loop to display the three foods after they're done adding them
// 4. run the code to ensure that it works correctly
int main() {
    if (randomBool()) {
        cout << "You've won a prize!!!\n";
        // if true , call adventure
    }

    string input;

    cout << "Min = what?: ";
    getline(cin, input);
    int min = stoi(input);

    cout << "Max = what?: ";
    getline(cin, input);
    int max = stoi(input);

    cout << "A random number between " << min << " and " << max;
    cout << " is " << randomNumberInRange(min, max) << ".\n";

    // call the function
    sayHello();                                         // hello/greeting function    // default greeting
    sayHello("Welcome to the thunderdome!!!");          // customize greeting

    string playerName = getPlayerName();                // don't HAVE to specify min


    cout << "Triple of 4 is " << triple(4) << ".\n";
    cout << "Triple of 4 is " << triple(3) << "\n";
    cout << "Triple of 4 is " << triple(5.35) << "\n";

    // cout << "Hello Stranger!\n";
    cout << "What are your top three favorite foods?\n";
    // string input;                                    // to keep track of what the user types

    string favFoods[11];

    for (int i = 0; i < 3; i++) {                       // set up "fav food #1, fav food #2, fav food #3 (only 3 rows)
        cout << "fav food #" << i + 1 << ": ";          // prompt the player with text
        getline(cin, input);                            // get input from the player

        favFoods[i] = input;                            // add that input to the array
    }
    
    cout << "Here are your favorite foods:\n";
    for (int i = 0; i < 3; i++) {                       // run the loop 3 times
        cout << favFoods[i] << ".\n";                   // output each favFood
    }

    sayGoodbye();                                       // goodbye/farewell function  // default farewell
    sayGoodbye("Here's looking at you, kid.");          // customize farewell
} // end of main

