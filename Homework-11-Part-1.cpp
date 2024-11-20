#include <iostream>
using namespace std;

class Pokemon {
public:
    Pokemon() {
        cout << "A Pokémon is created!" << endl;
    }
    virtual ~Pokemon() {
        cout << "A Pokémon is destroyed!" << endl;
    }
};

class ElectricPokemon : public Pokemon {
public:
    ElectricPokemon() {
        cout << "An Electric Pokémon is created!" << endl;
    }
    ~ElectricPokemon() {
        cout << "An Electric Pokémon is destroyed!" << endl;
    }
};

class Pikachu : public ElectricPokemon {
private:
    int level;

public:
    Pikachu(int lvl) : level(lvl) {
        cout << "Pikachu is created with level " << level << "!" << endl;
    }

    ~Pikachu() {
        cout << "Pikachu is destroyed!" << endl;
    }

    void display() {
        cout << "Pikachu's level is " << level << "." << endl;
    }
};

int main() {
    Pikachu pikachu(10);
    pikachu.display();

    return 0;
}