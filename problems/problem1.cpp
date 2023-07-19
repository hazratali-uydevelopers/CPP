#include <bits/stdc++.h>
using namespace std;

void Print (int i, int n) { //print name n times
    if (i > n) {
        return;
    }
    cout << "Ali" << endl;
    Print (i + 1, n);
}

int main () {
    Print(1, 4);
    return 0;
}
