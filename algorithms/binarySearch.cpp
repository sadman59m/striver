#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int l = 0, r = 4;
    int mid;
    while(l <= r) {
        mid = l + (r - l) / 2;
        if(arr[mid] == 4) {
            cout << mid << " " << arr[mid] << endl;
            return 0;
        }
        else if( arr[mid] < 4) {
            l = mid+1;
        }
        else {
            r = mid-1;
        }
    }
    return 0;
}