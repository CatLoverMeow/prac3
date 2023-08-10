#include "Reverser.h"
#include <cmath>
using namespace std;

int Reverser::reverseDigit(int value){
    if (value < 0){
        return -1;
    }
    else if(value < 10){
        return value;
    }
    else{
        string val = to_string(value);
        int digit = val.at(val.size()-1) * pow(10,val.size()-1);
        val.pop_back();
        int new_dig = stoi(val);
        return digit + reverseDigit(new_dig);
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