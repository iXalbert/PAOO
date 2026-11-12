#ifndef UNIQUE_ASSETS_ITEM6_HPP
#define UNIQUE_ASSETS_ITEM6_HPP

#include <string>

using namespace std;

class Uncopyable {
protected:
    Uncopyable() {}
    ~Uncopyable() {}
private:
    Uncopyable(const Uncopyable&);            
    Uncopyable& operator=(const Uncopyable&); 
};

class GameSession : private Uncopyable {
private:
    string sessionToken;
public:
    GameSession(const string& token);
    string getToken() const;
};

class LegendaryArtifact {
private:
    string artifactName;
public:
    LegendaryArtifact(const string& name);

    LegendaryArtifact(const LegendaryArtifact&) = delete;
    LegendaryArtifact& operator=(const LegendaryArtifact&) = delete;

    string getName() const;
};

void runUniqueAssetsItem6();

#endif 