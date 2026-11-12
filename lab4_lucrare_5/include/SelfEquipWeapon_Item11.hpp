#ifndef SELF_EQUIP_WEAPON_ITEM11_HPP
#define SELF_EQUIP_WEAPON_ITEM11_HPP

#include <string>

using namespace std;

class EnchantmentData {
public:
    string spellName;
    int bonusDamage;

    EnchantmentData(const string& spell, int dmg);
};

class MagicWeapon {
private:
    string weaponName;
    EnchantmentData* enchant; 

    void swapData(MagicWeapon& other) noexcept;

public:
    MagicWeapon(const string& name, const string& spell, int dmg);
    MagicWeapon(const MagicWeapon& rhs);
    MagicWeapon& operator=(const MagicWeapon& rhs);
    ~MagicWeapon();

    void printWeapon() const;
};

void runSelfEquipWeaponItem11();

#endif