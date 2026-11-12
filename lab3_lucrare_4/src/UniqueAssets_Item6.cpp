#include "UniqueAssets_Item6.hpp"
#include <iostream>

using namespace std;

GameSession::GameSession(const string& token) : sessionToken(token) {
    cout << "Sesiune de joc pornita: " << sessionToken << "\n";
}

string GameSession::getToken() const {
    return sessionToken;
}

LegendaryArtifact::LegendaryArtifact(const string& name) : artifactName(name) {
    cout << "Artefact legendar dropat: " << artifactName << "\n";
}

string LegendaryArtifact::getName() const {
    return artifactName;
}

void runUniqueAssetsItem6() {
    cout << "\n";

    GameSession session1("Sesiune_1");
    

    LegendaryArtifact sword("Sabie_Mitica");
   
}