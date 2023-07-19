#include <bits/stdc++.h>
using namespace std;

void Print (int i, int n) { //print 1 to n
    if (i > n) {
        return;
    }
    cout << i << endl;
    Print (i + 1, n);
}

int main () {
    Print(1, 4);
    return 0;
}
