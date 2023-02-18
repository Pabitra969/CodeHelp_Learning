#include "iostream"
#include "findSqrt.h"
using namespace std;

int fun(int t) {
    for (int i = 0; i < 10; i++) {
        if(i==t){
            return i;
        }
    }
}

int main() {

//    findSqrt();
    cout << fun(12);

    return 0;
}