#include <iostream>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;

    if (b - a < 0){
        cout << 0;
    } else {
        int count = 1;
        for (int i = a + 1; i >= a && i <= b; i++) {
            count++;
        }
        cout << count;
    }
    
    return 0;
}
