#include <bits/stdc++.h>
using namespace std;

void Print (int n) { //print 1 to n using backtrack
    if (n < 1) {
        return;
    }
    Print (n - 1);
    cout << n << endl;
}

int main () {
    Print(4);
    return 0;
}
