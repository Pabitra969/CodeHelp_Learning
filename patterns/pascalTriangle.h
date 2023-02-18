//
// Created by PABITRA KUMAR GHORAI on 09/02/23.
//

#ifndef CODEHELP_LEARNING_PASCALTRIANGLE_H
#define CODEHELP_LEARNING_PASCALTRIANGLE_H

#endif //CODEHELP_LEARNING_PASCALTRIANGLE_H

int factorial1 (int n) {
    if (n == 1) {
        return 1;
    }
    return factorial(n-1)*n;
}

void pascalTriangle (int n) {
    for (int i = 0; i < n; ++i) {
        // space for the triangle
        for (int j = 0; j < n - i - 1; ++j) {
            cout << " ";
        }
        // for the main triangle
        for (int j = 0; j < i + 1; ++j) {
            cout << (factorial1(n)/(factorial1(n-j) * factorial1(j)));
        }
        cout<<endl;
    }
}