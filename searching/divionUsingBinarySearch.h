//
// Created by PABITRA KUMAR GHORAI on 19/02/23.
//

#ifndef CODEHELP_LEARNING_DIVIONUSINGBINARYSEARCH_H
#define CODEHELP_LEARNING_DIVIONUSINGBINARYSEARCH_H

#endif //CODEHELP_LEARNING_DIVIONUSINGBINARYSEARCH_H
#include "iostream"
using namespace std;

int division (int dividend, int divisor) {
    int ans = 0;
    int s = 0;
    int e = dividend;

    while (s <= e) {
        int mid = s + (e-s)/2;
        if (mid*divisor == dividend) {
            ans = mid;
            break;
        }
        else if (mid*divisor > dividend) {
            // left searching
            e = mid -1;
        }
        else {
            //storing ans
            ans = mid;
            //right searching
            s = mid + 1;
        }
    }
    return ans;
}