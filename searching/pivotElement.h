//
// Created by PABITRA KUMAR GHORAI on 18/02/23.
//

#ifndef CODEHELP_LEARNING_PIVOTELEMENT_H
#define CODEHELP_LEARNING_PIVOTELEMENT_H

#endif //CODEHELP_LEARNING_PIVOTELEMENT_H
#include "iostream"

using namespace std;

int pivotIndex(int arr[]) {
    int start = 0;
    int end = 7;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (arr[mid] > arr[mid+1]) {
            cout << "pivot index " << mid << endl;
            break;
        }else if (arr[mid] > arr[start]) {
            start = mid + 1;
        }else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}