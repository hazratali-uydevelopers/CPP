#include <bits/stdc++.h>
using namespace std;

void Print (int n) {//print n to 1
    if (n < 1) { 
        return;
    }
    cout << n << endl;
    Print (n - 1);
}

int main () {
    Print(4);
    return 0;
}
