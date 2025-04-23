// Adventure 2.0

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// need random, loop, more functions

int health = 30;
int totalTreasure = 0;
int sides = 6;

void sayReturn(string fries = "Would you like some french fries? Type 'yes' or 'no'.") {
    cout << fries << "\n";
}
// void story
// void sayEnding(string yum = ) {
// void adventure

int main()
{
    cout << "Rise and shine! \nYou're craving some fried taters and there are taters roaming neaby...\n";
    
    string input;

    cout << "Your health is " << health << ".\n";
    sayReturn();
    getline(cin, input);

    if (input == "yes") {

    }
    else if (input == "no") {
        cout << "Congrats!\nYou have a total of " << totalTreasure << " fries! Yum!\n";
        // break;
    }
    else {
        cout << "Sorry, I don't speak gibberish.\n";
    }
}