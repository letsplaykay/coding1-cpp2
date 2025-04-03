#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "Squidward: Welcome to the Krusty Krab... What would you like to-?\n";
    cout << "*tap tap* *tap tap*\n";
    cout << "Spondgebob: What was that?\n";
    cout << "*eeEEeEEeEEEeEk*\n";
    cout << "Spongebob: IT'S THE HASH-SLINGING SLASHER!!!!!\n";
    cout << "Spongebob: Loyal customer! Take my spatula!\n";
    
    srand(static_cast<unsigned int>(time(0)));
    int health = 10;
    int attack = rand() % 5;
    int block = rand() % 5;
    int krabbyPatty = 0;
    char customerInput = 'n';

    do {
        cout << "Press 's' to use your spatula to block the Hash-Slinging Slasher's attacks!\n";
        cin >> customerInput;
        krabbyPatty += 1;
        if (customerInput == 's') {
            attack = rand() % 5;
            block = rand() % 5;
            if (block >= attack) {
                cout << "Succuessful block! Your health is " << health << ".\n";
                cout << "Would you like to run or stay?\n";
                string input;
                cin >> input;
                if (input == "run" || input == "Run") {
                    cout << "You ran away, you bubble-blowing baby!\n";
                    cout << "But at least you have " << krabbyPatty << " Krabby Patties!\n";
                    break;
                }
                else {
                    cout << "You're the man! You now have " << krabbyPatty << " Krabby Patties!\n";
                }
            }
            else {
                health -= 1;
                cout << "You missed, but the Hash-Slinging Slasher didn't! Your health is now " << health << ".\n";
                if (health == 0) {
                    cout << "Oops. Your health reached 0, so...\n";
                    cout << "The Hash-Slinging Slasher stole your " << krabbyPatty << " Krabby Patties.\n";
                }
                else {
                    cout << "Don't let him steal your Krabby Patties!\n";
                }
            }
        }
        else {
            health -= 1;
            cout << "You missed, but the Hash-Slinging Slasher didn't! Your health is now " << health << ".\n";
        }
    } while (customerInput == 's' && health > 0);

    while (true) {
        cout << "Want to try again?\n";
        string input;
        cin >> input;
        
        if (input == "yes") {
            cout << "Here we go again!\n";
            main();
        }
        else {
            cout << "Thanks for playing, customer!\n";
            break;          
        }
    }
    return 0;
}