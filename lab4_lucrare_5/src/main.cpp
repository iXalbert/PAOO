#include <iostream>
#include "ChainedStats_Item10.hpp"
#include "SelfEquipWeapon_Item11.hpp"
#include "FullCharacterCopy_Item12.hpp"

using namespace std;

int main() {

    runChainedStatsItem10();
    runSelfEquipWeaponItem11();
    runFullCharacterCopyItem12();

    cout << "Start lupta..\n";

    GuildHero leader("Albert", 8500, "Sabia cu 100 de taisuri", 99);       
    GuildHero squadMember("Denis", 4000, "Magic wand", 50);
    squadMember = leader;                                    

    MagicWeapon warglaive("Sabia de foc", "Rage of fire", 300); 
    MagicWeapon& aliasWeapon = warglaive;
    warglaive = aliasWeapon;                                 

    PlayerWallet raidPool("Banca", 1000);           
    (raidPool += 500) -= 200;                               

    squadMember.printHero();
    warglaive.printWeapon();
    raidPool.printBalance();

    return 0;
}