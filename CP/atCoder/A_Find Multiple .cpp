#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;

    int d = __gcd(a, b);
    cout << d << endl;

    return 0;
}
