#include <bits/stdc++.h>
using namespace std;

int sum(int n) { //Factorial of n numbers using return f()
    if (n == 1){
        return 1;
    }
    return n * sum(n - 1);
}

int main () {
    cout << sum(4);
    return 0;
}
