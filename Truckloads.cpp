#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates < 2 || numCrates > 10000 || loadSize < 1){
        return -1;
    }
    else if(numCrates <= loadSize){
        return 1;
    }
    else {
        int trucks = 0;
        int half_crates = numCrates / 2;
        return trucks + numTrucks(half_crates, loadSize) + numTrucks(numCrates-half_crates, loadSize);
    }
}