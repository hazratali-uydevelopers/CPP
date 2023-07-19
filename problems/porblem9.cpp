#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[],int left, int right) { //reverse an arr[] 
    if (left >= right) { //0 4 / 1 3 / (2 2) / 3 1 / 4 0
        return;
    }
    swap(arr[left], arr[right]);
    reverse(arr, left + 1, right - 1);
}

int main () {
    int arr[] = {1, 2, 3, 4}; 
    reverse(arr, 0, 3);

    cout << arr[0] << arr[1] << arr[2] << arr[3];
    return 0;
}
