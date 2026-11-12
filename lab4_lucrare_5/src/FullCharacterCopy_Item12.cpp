#include "FullCharacterCopy_Item12.hpp"
#include <iostream>

using namespace std;

BaseUnit::BaseUnit(const string& unitName, int unitHp) : name(unitName), hp(unitHp) {}

BaseUnit::BaseUnit(const BaseUnit& rhs) : name(rhs.name), hp(rhs.hp) {}

BaseUnit& BaseUnit::operator=(const BaseUnit& rhs) {
    if (this != &rhs) {
        name = rhs.name;
        hp = rhs.hp;
    }
    return *this;
}

string BaseUnit::getName() const { return name; }
int BaseUnit::getHp() const { return hp; }

GuildHero::GuildHero(const string& heroName, int heroHp, const string& guild, int rank) : BaseUnit(heroName, heroHp), guildName(guild), rankLevel(rank) {}

GuildHero::GuildHero(const GuildHero& rhs) : BaseUnit(rhs), guildName(rhs.guildName), rankLevel(rhs.rankLevel) {}

GuildHero& GuildHero::operator=(const GuildHero& rhs) {
    if (this != &rhs) {
        BaseUnit::operator=(rhs); 
        guildName = rhs.guildName; 
        rankLevel = rhs.rankLevel;
    }
    return *this;
}

void GuildHero::printHero() const {
    cout << "  Erou: " << getName()  << " | HP: " << getHp() << " | Ghilda: " << guildName  << " | Rang: " << rankLevel << "\n";
}

void runFullCharacterCopyItem12() {
    cout << "\n";

    GuildHero originalHero("Albert", 5000, "Sabia Mitica", 10);
    
    GuildHero clonedHero(originalHero);
    cout << "  Eroul clonat prin Copy Constructor:\n";
    clonedHero.printHero();

    GuildHero assignedHero("Amalia", 100, "Harpa de aur", 1);
    assignedHero = originalHero;
    cout << "  Eroul actualizat prin operator=:\n";
    assignedHero.printHero();
}