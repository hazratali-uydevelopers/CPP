#include <bits/stdc++.h>
using namespace std;

int sum(int n) { //sum of n numbers using return f()
    if (n == 0){
        return 0;
    }
    return n + sum(n - 1);
}

int main () {
    cout << sum(4);
    return 0;
}
