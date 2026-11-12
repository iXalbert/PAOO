#include <iostream>
#include "CharacterInit_Item4.hpp"
#include "InventoryAndQuests_Item5.hpp"
#include "UniqueAssets_Item6.hpp"

using namespace std;

int main() {
  
    runCharacterInitItem4();
    runInventoryAndQuestsItem5();
    runUniqueAssetsItem6();

    cout << "Start scenariu..\n";

    GameCharacter mainHero("EUL", "Healer", 60);         
    string heroName = mainHero.getName();
    ActiveQuest raidQuest(heroName, "RAID-01");   
    GameSession activeSession("Sesiune_1");               
    LegendaryArtifact bow("Arbaleta_MItica");       

    mainHero.printStats();
    raidQuest.printQuestInfo();
    cout << "  Conectat cu sesiunea [" << activeSession.getToken() << "] echipat cu [" << bow.getName() << "]\n";

    return 0;
}