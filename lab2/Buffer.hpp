#ifndef BUFFER_HPP
#define BUFFER_HPP

#include <iostream>

using namespace std;

class Buffer {
private:
    
    int* date;
    int marime;

public:
  
    Buffer(int m = 0);
    ~Buffer();
    
    Buffer(const Buffer& altul);
    Buffer(Buffer&& altul);

};

#endif