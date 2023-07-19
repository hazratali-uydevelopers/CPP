#include <iostream>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;

    int x1 = a + (a - 1);
    int x2 = b + (b - 1);
    int x3 = a + b;

    cout << max(x3, max(x1, x2)) << endl;
    return 0;
}
