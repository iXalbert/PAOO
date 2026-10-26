#ifndef BUFFER_HPP
#define BUFFER_HPP

#include <iostream>

using namespace std;

class Buffer {
private:
    
    int* date;
    int marime;

public:
   
    Buffer(int m = 0) {
        marime = m;
        if (marime > 0) {
            date = new int[marime];
        } else {
            date = nullptr;
        }
        cout << "[CONSTRUCTOR] Alocat " << marime << " elemente la adresa " << date << "\n";
    }

    
    ~Buffer() {
        cout << "[DESTRUCTOR] Eliberat memorie de la adresa " << date << "\n";
        delete[] date;
    }

    
    Buffer(const Buffer& altul) {
        marime = altul.marime;
        if (marime > 0) {
            date = new int[marime];
            for (int i = 0; i < marime; i++) {
                date[i] = altul.date[i];
            }
        } else {
            date = nullptr;
        }
        cout << "[COPY CONSTRUCTOR] Copiere adanca (Deep Copy)\n";
    }

    
    Buffer(Buffer&& altul) noexcept {
        date = altul.date;
        marime = altul.marime;

        
        altul.date = nullptr;
        altul.marime = 0;

        cout << "[MOVE CONSTRUCTOR] Preluat pointer direct fara alocare noua\n";
    }
};

#endif