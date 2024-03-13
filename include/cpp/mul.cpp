#include "../hpp/mul.hpp"
#include <iostream>

std::bitset<TWOM> MYSPACE::CMUL(std::bitset<TWOM> operand1, std::bitset<TWOM> operand2){
    std::bitset<TWOM> TEMP(0);
    std::bitset<TWOM> TEMP2(operand1);
    for(size_t i{0}; i<8; i++){
        if(operand2[i]){
            TEMP = TEMP ^ TEMP2;
        }
        TEMP2  = TEMP2  << 1;
    }
    return TEMP;
}


 std::bitset<M>  MYSPACE::CRED( std::bitset<TWOM> PROD){
    std::bitset<TWOM> UPPER(PROD >> M);
    std::bitset<TWOM> FX(0x1b);

    for()

 }