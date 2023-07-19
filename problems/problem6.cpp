#include <bits/stdc++.h>
using namespace std;

void sum(int i, int result) { //sum of n numbers using Parameter
    if (i < 1){
        cout << result << endl;
        return;
    }
    sum(i - 1, result + i);
}

int main () {
    sum(4,0);
    return 0;
}
