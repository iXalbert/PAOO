#ifndef INVENTORY_AND_QUESTS_ITEM5_HPP
#define INVENTORY_AND_QUESTS_ITEM5_HPP

#include <string>

using namespace std;


class InventoryItem {
public:
    string itemName;
    int quantity;
};


class ActiveQuest {
private:
    string& playerNameRef;
    const string questId;

public:
    ActiveQuest(string& player, const string& id);
    void printQuestInfo() const;
};

void runInventoryAndQuestsItem5();

#endif