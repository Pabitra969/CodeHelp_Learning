//
// Created by PABITRA KUMAR GHORAI on 18/02/23.
//

#ifndef CODEHELP_LEARNING_BINARYSEACHIN2DARRAY_H
#define CODEHELP_LEARNING_BINARYSEACHIN2DARRAY_H

#endif //CODEHELP_LEARNING_BINARYSEACHIN2DARRAY_H
#include "iostream"
using namespace std;

void findIn2DArray(int **arr, int row , int col, int target) {

//    int row = 3;
//    int col = 5;
    int start = 0;
    int end =  row * col - 1 ;
    int mid = start + (end - start) / 2;

    int count = 0;

    while (start <= end) {
        int row1 = mid / 5;
        int col1 = mid % 5;

        if (target == arr[row1][col1]) {
            count ++;
            cout << "Found" << endl;
            cout << "target found at index " << row1 << ", " << col1;
        }
        else if (target > arr[row1][col1]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    if (count == 0) {
        cout << "target not found";
    }
}