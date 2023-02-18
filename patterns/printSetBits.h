//
// Created by PABITRA KUMAR GHORAI on 07/02/23.
//

#ifndef CODEHELP_LEARNING_PRINTSETBITS_H
#define CODEHELP_LEARNING_PRINTSETBITS_H

#endif //CODEHELP_LEARNING_PRINTSETBITS_H

using namespace std;

int countSetBit (int n) {
    int count = 0;
    while (n != 0) {
        if (n & 1 == 1) {
            count ++;
        }
        n = n >> 1;
    }
    return count;
}