#include <iostream>
#include "hpp/mul.hpp"

int main(){
    std::bitset<TWOM> A(0xAB);
    std::bitset<TWOM> B(0x98);

    std::bitset<TWOM> RES = MYSPACE::CMUL(A, B);
    std::cout << RES.to_ullong();
}