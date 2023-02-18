#include <iostream>
using namespace std;

int main() {
    int a ;
    cin >> a;
    for(int i = 1; i <= a; i++) {
        for (int j = 1; j <= a-i; j++) {
            cout << "   ";

        }
        int j;
        for (j = i; j<=i*2-1; j++) {
            cout << j;
            cout << "  ";
        }
        for (int k = 1; k <= i - 1; k++) {
            cout << j - 2;
            cout << "  ";
            j--;
        }

        cout << endl;
    }
    return 0;
}
