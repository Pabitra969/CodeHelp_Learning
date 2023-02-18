//
// Created by PABITRA KUMAR GHORAI on 05/02/23.
//

#ifndef CODEHELP_LEARNING_ROUGH_H
#define CODEHELP_LEARNING_ROUGH_H

#endif //CODEHELP_LEARNING_ROUGH_H


void pattern(int n) {
    for (int row = 0; row < n; ++row) {
        // for side upper triangle space
//        for (int j = 0; j < n - row - 1; ++j) {
//            cout << " ";
//        }
        // for first row
        int a = 2;
        for (int j = 1; j <= 2 * row + 1; ++j) {

            if (j == 1) {
                cout << 1;
            }else if (j == 2*row + 1){
                cout << row+1;
            } else if (row == n-1 && j != 1 && j % 2 != 0) {
                cout << a;
                a++;
            }
            else {
                cout << " ";
            }
        }
        cout<<endl;

    }
};