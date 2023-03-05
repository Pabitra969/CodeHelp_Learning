#include "iostream"
#include "findSqrt.h"
#include "binarySeachIn2DArray.h"
#include "pivotElement.h"
#include "divionUsingBinarySearch.h"

using namespace std;

int fun(int t) {
    for (int i = 0; i < 10; i++) {
        if(i==t){
            return i;
        }
    }
}

int main() {

    int arr[8] = {5,6,7,8,1,2,3,4};
    pivotIndex(arr);
    int dividend = -21;
    int divisor = 3;
    int ans = division(dividend,divisor);
    cout << "ans -> " << ans << endl;

    return 0;
}