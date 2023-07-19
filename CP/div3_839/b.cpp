#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, a, b, c, d;
    cin >> n;
    
    while (n--) {
        cin >> a >> b 
            >> d >> c;

        if (a < b && d < c && a < d && b < c) {
            cout << "YES" << endl;
        } else if (d < a && c < b && d < c && a < b) {
            cout << "YES" << endl;
        } else if (c < d && b < a && c < b && d < a) {
            cout << "YES" << endl;
        } else if (b < c && a < d && b < a && c < d) {
            cout << "YES" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
