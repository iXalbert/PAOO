#include "ChainedStats_Item10.hpp"
#include <iostream>

using namespace std;

PlayerWallet::PlayerWallet(const string& name, int initialGold)
    : playerName(name), gold(initialGold) {}

PlayerWallet& PlayerWallet::operator=(const PlayerWallet& rhs) {
    if (this != &rhs) {
       
        gold = rhs.gold;
    }
    return *this; 
}

PlayerWallet& PlayerWallet::operator+=(int bonusGold) {
    gold += bonusGold;
    return *this; 
}

PlayerWallet& PlayerWallet::operator-=(int spentGold) {
    gold -= spentGold;
    return *this;
}

void PlayerWallet::printBalance() const {
    cout << " Portofel [" << playerName << "]: " << gold << " gold\n";
}

void runChainedStatsItem10() {
    cout << "\n";

    PlayerWallet w1("Albert", 100);
    PlayerWallet w2("Denis", 250);
    PlayerWallet w3("Amalia", 999);

    w1 = w2 = w3;

    (w1 += 150) -= 49;

    w1.printBalance();
    w2.printBalance();
    w3.printBalance();
}