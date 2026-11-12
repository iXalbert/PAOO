#include "InventoryAndQuests_Item5.hpp"
#include <iostream>

using namespace std;

ActiveQuest::ActiveQuest(string& player, const string& id)
    : playerNameRef(player), questId(id) {}

void ActiveQuest::printQuestInfo() const {
    cout << " Quest [" << questId << "] atribuit jucatorului: " << playerNameRef << "\n";
}

void runInventoryAndQuestsItem5() {
    cout << "\n";

    InventoryItem potion1; 
    potion1.itemName = "Potiune de viata";
    potion1.quantity = 5;

    InventoryItem potion2(potion1); 
    InventoryItem potion3;
    potion3 = potion1; 
    cout << " Obiect duplicat tacit in rucsac: " << potion3.itemName << " x" << potion3.quantity << "\n";

    string player1 = "player1";
    string player2 = "player2";
    ActiveQuest q1(player1, "ID-01");
    ActiveQuest q2(player2, "ID-02");

    q1.printQuestInfo();
    q2.printQuestInfo();

    
}