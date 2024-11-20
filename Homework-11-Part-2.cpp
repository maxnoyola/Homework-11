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

    virtual void attack() const = 0;
    virtual void defend() const = 0;
    virtual void evolve() = 0;
    virtual void useSpecialAbility() const = 0; 
    virtual void displayStats() const = 0;      
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

    void attack() const override {
        cout << "Pikachu uses Thunderbolt!" << endl;
    }

    void defend() const override {
        cout << "Pikachu dodges the attack with agility!" << endl;
    }

    void evolve() override {
        cout << "Pikachu evolves into Raichu!" << endl;
    }

    void useSpecialAbility() const override {
        cout << "Pikachu unleashes a powerful Electric Surge!" << endl;
    }

    void displayStats() const override {
        cout << "Pikachu's level is " << level << " and its type is Electric." << endl;
    }

    void display() const {
        displayStats();
    }
};

int main() {
    Pikachu pikachu(10);
    pikachu.display();
    pikachu.attack();
    pikachu.defend();
    pikachu.useSpecialAbility();
    pikachu.evolve();

    return 0;
}
