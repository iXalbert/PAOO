#include "Buffer.hpp"
#include <iostream>
#include <utility>

Buffer::Buffer(int m) {
        marime = m;
        if (marime > 0) {
            date = new int[marime];
        } else {
            date = nullptr;
        }
        cout << "[CONSTRUCTOR] Alocat " << marime << " elemente la adresa " << date << "\n";
    }

    
Buffer::~Buffer() {
        cout << "[DESTRUCTOR] Eliberat memorie de la adresa " << date << "\n";
        delete[] date;
    }

Buffer::Buffer(const Buffer& altul) {
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

    
Buffer::Buffer(Buffer&& altul) noexcept {
        date = altul.date;
        marime = altul.marime;

        
        altul.date = nullptr;
        altul.marime = 0;

        cout << "[MOVE CONSTRUCTOR] Preluat pointer direct fara alocare noua\n";
    }