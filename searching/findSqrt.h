//
// Created by PABITRA KUMAR GHORAI on 18/02/23.
//

#ifndef CODEHELP_LEARNING_FINDSQRT_H
#define CODEHELP_LEARNING_FINDSQRT_H

#endif //CODEHELP_LEARNING_FINDSQRT_H
#include "iostream"
using namespace std;

int findSqrt() {
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int target = n;
    int s = 0;
    int e = n;
    int mid = s + (e-s) / 2;
    int ans = -1;

    while (s <= e) {
        if(mid*mid == target) {
            return mid;
        }
        else if (mid*mid > target) {
            //left search
            e = mid -1;
        }
        else {
            // ans store
            ans = mid;
            // right search
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    cout << "Ans is -- " << ans << endl;
//    return 0;
}