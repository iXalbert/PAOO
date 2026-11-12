#include "SelfEquipWeapon_Item11.hpp"
#include <iostream>
#include <utility> 

using namespace std;

EnchantmentData::EnchantmentData(const string& spell, int dmg) : spellName(spell), bonusDamage(dmg) {}

MagicWeapon::MagicWeapon(const string& name, const string& spell, int dmg) : weaponName(name), enchant(new EnchantmentData(spell, dmg)) {}

MagicWeapon::MagicWeapon(const MagicWeapon& rhs) : weaponName(rhs.weaponName),enchant(new EnchantmentData(rhs.enchant->spellName, rhs.enchant->bonusDamage)) {}

void MagicWeapon::swapData(MagicWeapon& other) noexcept {
    swap(weaponName, other.weaponName);
    swap(enchant, other.enchant);
}

MagicWeapon& MagicWeapon::operator=(const MagicWeapon& rhs) {
    MagicWeapon temp(rhs); 
    swapData(temp);        
    return *this;          
}

MagicWeapon::~MagicWeapon() {
    delete enchant;
}

void MagicWeapon::printWeapon() const {
    cout << "  Arma: " << weaponName << " | Vraja: " << enchant->spellName << " (+" << enchant->bonusDamage << " DMG)\n";
}

void runSelfEquipWeaponItem11() {

    cout << "\n";

    MagicWeapon sword("Denis", "Tunica de doua tone", 120);
    
    MagicWeapon& sameSwordRef = sword;
    sword = sameSwordRef;

    cout << " Dupa auto-atribuire (sword = sameSwordRef), datele au ramas intacte:\n";
    sword.printWeapon();
}