#include <bits/stdc++.h>
using namespace std;

bool canItBreak(int a, int b, int c) {
    for (int x = 0; x <= c; x++) {
        for (int y = 0; y <= c; y++) {
            if (x * a + y * b == c) {
                return true;
            }
        }
    }
    return false;
}

int main () {
    int a, b, c;
    cin >> a >> b >> c;

    if (canItBreak(a, b, c)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
