#include <iostream>
#include "MathUtils.h"

using namespace std;

int main() {
    int x, y;

    cout << "Introdu primul numar: ";
    cin >> x;

    cout << "Introdu al doilea numar: ";
    cin >> y;

    cout << "Suma: " << add(x, y) << endl;
    cout << "Produsul: " << multiply(x, y) << endl;

    return 0;
}