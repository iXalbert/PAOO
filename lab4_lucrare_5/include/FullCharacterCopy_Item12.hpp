#ifndef FULL_CHARACTER_COPY_ITEM12_HPP
#define FULL_CHARACTER_COPY_ITEM12_HPP

#include <string>

using namespace std;

class BaseUnit {
private:
    string name;
    int hp;

public:
    BaseUnit(const string& unitName, int unitHp);
    BaseUnit(const BaseUnit& rhs);
    BaseUnit& operator=(const BaseUnit& rhs);
    virtual ~BaseUnit() = default;

    string getName() const;
    int getHp() const;
};

class GuildHero : public BaseUnit {
private:
    string guildName;
    int rankLevel; 

public:
    GuildHero(const string& heroName, int heroHp, const string& guild, int rank);
    GuildHero(const GuildHero& rhs);
    GuildHero& operator=(const GuildHero& rhs);

    void printHero() const;
};

void runFullCharacterCopyItem12();

#endif