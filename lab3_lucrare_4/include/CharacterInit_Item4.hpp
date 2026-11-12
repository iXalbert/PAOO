#ifndef CHARACTER_INIT_ITEM4_HPP
#define CHARACTER_INIT_ITEM4_HPP

#include <string>

using namespace std;

class GameCharacter {
private:
    
    string name;
    string characterClass;
    int level;
    int maxHp;
    string fullTitle;

public:
    GameCharacter(const string& charName, const string& charClass, int startLevel);
    void printStats() const;
    string getName() const;
};

void runCharacterInitItem4();

#endif 