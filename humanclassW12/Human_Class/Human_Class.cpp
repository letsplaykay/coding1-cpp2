// Human_Class.cpp

#include <iostream>
#include <string>
using namespace std;

class human {
private:            // attributes
    string Name;
    int Health = 10;
    int Damage = 4;

public:
    human(string name, int health, int baseDamage) {
        Name = name;
        Health = health;
        Damage = baseDamage;
    }
    void SayHello() {
        cout << "Howdy!\n";
    }

    void SetHealth(int byAmount) {
        Health += byAmount;
    }

    void SetDamage(int givenDamage) {
        Damage += givenDamage;
    }
    
    int GetHealth() {
        return Health;
    }

    int GetDamage() {
        return Damage;
    }
};


int main() {
    human kay("kay", 100, 1000);

    cout << "kay is born: " << kay.GetHealth() << " : " << kay.GetDamage() << ".\n";
    kay.SayHello();

    // Enemy shoots!
    kay.SetHealth(-2);
    cout << "kay was shot! " << kay.GetHealth()<< "\n";

    // Friend heals you. 
    kay.SetHealth(2);
    cout << "kay was healed! " << kay.GetHealth()<< "\n";

    // Enemy nerfs you. 
    kay.SetDamage(-2);
    cout << "kay was nerfed! " << kay.GetDamage()<< "\n";

    // Friend buffs you. 
    kay.SetDamage(2);
    cout << "kay was buffed! " << kay.GetDamage() << "\n";
}