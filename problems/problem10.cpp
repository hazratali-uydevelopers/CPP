#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[],int i, int n) { //reverse an arr[] 
    if (i > n / 2) { //0 4 / 1 3 / (2 2) / 3 1 / 4 0
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverse(arr, i + 1, n);
}

int main () {
    int arr[] = {1, 2, 3, 4}; 
    reverse(arr, 0, 4);

    cout << arr[0] << arr[1] << arr[2] << arr[3];
    return 0;
}
