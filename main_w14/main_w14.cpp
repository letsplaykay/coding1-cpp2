// main_w14.cpp

#include <iostream>
#include <string>
#include <fstream>      // File Stream, for reading from and writing to files
#include "filez.h"      // takes Write and Read from here/files.cpp
#include "ship.h"
using namespace std;

// Write and Read cut and placed into filez.cpp

int main() {
    cout << "Let's write some new files.\n";
    string lines[15];

    ReadFromFile();

    WriteToFile("Did you get the Switch 2 preorder?\n");

    ship minnow;
    minnow.type = CRUISER;s
    minnow.status();

    return 0;
}

/*
    files we'll use today
    1. main_w14         <--- this is the entry point for the rest of the program
    2. filez.h
    3. filez.cpp
    4. ship.h
    5. ship.cpp

    the header file just has the #includes and the function declarations
    the source file (.cpp) will have the function definitions

*/
