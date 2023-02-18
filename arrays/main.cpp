#include <iostream>
#include <vector>
using namespace std;


int firstOcc (vector<int> v,int target) {
    int start = 0;
    int end = v.size() - 1;
    int ans = -1;

    while(start <= end) {
        int mid = start + (end - mid)/2;
        if (v[mid] == target) {
            return mid;
        }
        else if (mid < target) {
            start = mid + 1;
        }
        else if (mid > target) {
            end = end - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> v {1,2,3,4,6,7};
    int target = 4;

    int ans = firstOcc(v, target);
    cout << "ans is. "<< ans << endl;
    cout << v[2];
    return 0;
}