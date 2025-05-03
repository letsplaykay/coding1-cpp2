#include "filez.h"

void WriteToFile(string givenString) {
    // open (or create) the file
    ofstream file("file.txt", ios::app);            // ios::app to append to end of file

    // early return if the file cannot be opened
    if (!file.is_open()) {          // ! is "not" meaning it makes a statement "not true" aka false
        cout << "Could not open file.\n";
        return;
    }
    // write text to the open file
    file << givenString;

    // close the file (which saves it to disk)
    file.close();

}

void ReadFromFile() {
    string fileContents;                // this is where we store the text in the file

    // open the file
    ifstream file("file.txt");

    // check that it's actually open
    if (!file.is_open()) {
        cout << "Could not open the file.\n";
    }

    // cout everything in the file
    while (getline(file, fileContents)) {
        cout << fileContents << "\n";
    }
    // close the file
    file.close();
}

void WriteShipToFile(ship givenShip) {
    cout << "Writing " << givenShip.name << " to file.\n";
    // open (or create) the file
    ofstream file("file.txt", ios::app);            // ios::app to append to end of file

    // early return if the file cannot be opened
    if (!file.is_open()) {          // ! is "not" meaning it makes a statement "not true" aka false
        cout << "Could not open file.\n";
        return;
    }
    // write text to the open file
    // treat file just like cout
    file << givenShip.name << ", ";         // add the NAME, which is a string, to the file
    file << givenShip.fuel;         // add the FUEL, which is an int, to the file

    switch (type) {
    case FIGHTER: file << "fighter.\n";
        break;
    case FRIGATE: file << "frigate.\n";
        break;
    case FREIGHTER: file << "freighter.\n";
        break;
    case CRUISER: file << "cruiser.\n";
        break;
    default: file << "unknown.\n";
        break;

    // close the file (which saves it to disk)
    file.close();
}