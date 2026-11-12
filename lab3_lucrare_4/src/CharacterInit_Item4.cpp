#include "CharacterInit_Item4.hpp"
#include <iostream>

using namespace std;

GameCharacter::GameCharacter(const string& charName, const string& charClass, int startLevel)
    : name(charName),
      characterClass(charClass),
      level(startLevel),
      maxHp(level * 100), 
      fullTitle(name + " the " + characterClass + " (Lvl " + to_string(level) + ")")
{
    cout << "Personaj creat: " << fullTitle << "\n";
}

void GameCharacter::printStats() const {
    cout << " Eroul: " << fullTitle << " | HP Maxim: " << maxHp << "\n";
}

string GameCharacter::getName() const {
    return name;
}

void runCharacterInitItem4() {
    cout << "\n";

    int bonusGold = 0; 
    bonusGold += 50;

    GameCharacter hero("Albert", "suport", 12);
    hero.printStats();
    cout << " Aur initial in inventar: " << bonusGold << " gold\n";
}