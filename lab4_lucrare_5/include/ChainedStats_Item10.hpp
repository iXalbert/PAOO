#ifndef CHAINED_STATS_ITEM10_HPP
#define CHAINED_STATS_ITEM10_HPP

#include <string>

using namespace std;

class PlayerWallet {
private:
    string playerName;
    int gold;

public:
    PlayerWallet(const string& name = "Unknown", int initialGold = 0);

    PlayerWallet& operator=(const PlayerWallet& rhs);
    PlayerWallet& operator+=(int bonusGold);
    PlayerWallet& operator-=(int spentGold);

    void printBalance() const;
};

void runChainedStatsItem10();

#endif 