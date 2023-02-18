//
// Created by PABITRA KUMAR GHORAI on 09/02/23.
//

#ifndef CODEHELP_LEARNING_FACTORIAL_H
#define CODEHELP_LEARNING_FACTORIAL_H

#endif //CODEHELP_LEARNING_FACTORIAL_H


int factorial (int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return factorial(n-1)*n;
}