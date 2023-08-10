#include "Reverser.h"
#include <cmath>
#include <iostream>
using namespace std;

int Reverser::reverseDigit(int value){
    if (value < 0){
        return -1;
    }
    else if(value < 10){
        return value;
    }
    else{
        int last_digit = value % 10;
        int remain_digit = trunc(value/10);
        int n_power = trunc(log10(value));
        return last_digit * pow(10,n_power) + reverseDigit(remain_digit);
    }
}

string Reverser::reverseString(string characters){
     if(characters.size()<=0){
        return "error";
    } else if(characters.size()<2){
        return characters;
    }
        return (reverseString(characters.substr(1))+characters.at(0));
    }