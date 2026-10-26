#include "Buffer.hpp"
#include <utility> 

using namespace std;

int main() {
    cout << "--- 1. CONSTRUCTOR ---\n";
    Buffer b1(5);

    cout << "\n--- 2. COPY CONSTRUCTOR ---\n";
    
    Buffer b2 = b1;

    cout << "\n--- 3. MOVE CONSTRUCTOR ---\n";
    
    Buffer b3 = move(b1);

    cout << "\n--- 4. DESTRUCTORI (Iesirea din scop) ---\n";
    return 0;
}