// HumanClass.cpp

#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum enemyType { GRUNT, MINIBOSS, BOSS };

// POD (Plain Old Data) structures
// a custom variable type

// classes
// template - brandon ---
struct enemy {
    // these data members are public by default
    int health = 10;
    int damage = 4;
    string name = "Enemy";
    enemyType type = GRUNT;

};
// template - brandon ---

struct address {
    string streetName;
    int streetNumber;
    string city;
    string stateCode;
    int zipCode;
};

struct employee {
    int Id = 0;
    string name;
    int age;
    // string address;
    address addr;   // structs can hold other structs!
    float wage;
};

string AddressOneLine(address addr) {
    string oneLine = "";
    oneLine += to_string(addr.streetNumber);    // 1234   // numbers must be put into to_string(something.number) format to show correctly
    oneLine += " " + addr.streetName;   // 1234 Main St
    oneLine += ", " + addr.city;    // 1234 Main St, Nowhere
    oneLine += ", " + addr.stateCode;   // 1234 Main St, Nowhere, NA
    oneLine += ", " + to_string(addr.zipCode);  // 1234 Main St, Nowhere, NA 12345   // ""

    return oneLine;
}

int main() {
    cout << "Structures!\n";

    enemy brandon;
    brandon.health = 10;
    brandon.damage = 4;
    brandon.name = "Evil Brandon";
    brandon.type = GRUNT;

    cout << "Here's " << brandon.name << "!\nHis health is " << brandon.health << ".\n";

    enemy tom;
    tom.damage = 6;
    tom.name = "Skinny Tom";

    cout << tom.name << " is attacking " << brandon.name << "!!\n";         // error for some reason??
    brandon.health -= tom.damage;

    if (brandon.health < 0) {
        cout << brandon.name << " has been killed!\n";
    }
    else {
        cout << brandon.name << " has " << brandon.health << " health left!\n";
    }

    vector<enemy> enemies;

    enemies.push_back(brandon);
    enemies.push_back(tom);

    cout << "Status of all enemies:\n";
    for (int i = 0; i < enemies.size(); i++) {
        cout << enemies[i].name << " has " << enemies.[i].health << "health.\n";        // error for some reason??
        cout << "Their damage is " << enemies[i].damage << " and their type is ";
        switch (enemies[i].type)
        {
        case GRUNT:
            cout << "grunt";
            break;
        case MINIBOSS:
            cout << "mini-boss";
            break;
        case BOSS:
            cout << "boss";
            break;
        default:
        cout << "unknown";
            break;
        }
        cout << ".\n";
    }

    employee kay;
    kay.Id = 1404;
    kay.name = "Kay";
    kay.age = 22;
    kay.wage = 1.25f;
    kay.addr.streetNumber = 1234;
    kay.addr.streetName = "Main St";
    kay.addr.city = "Nowhere";
    kay.addr.stateCode = "NA";
    kay.addr.zipCode = 12345;

    cout << kay.name << " lives at " << AddressOneLine(kay.addr) << ".\n";



    return 0;
}

