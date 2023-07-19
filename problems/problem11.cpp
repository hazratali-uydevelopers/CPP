#include <bits/stdc++.h>
using namespace std;

bool check(string s, int i, int n) { //palindrome or not 
    if (i > n/2) {
        return true;
    }
    if (s[i] != s[n - i]) {
        return false;
    }
    check(s, i + 1, n);
}

int main () {
    string s = "lol";
    int n = s.length() - 1;
    if (check(s, 0, n)) {
        cout << "yes";
    } else {
        cout << "no";
    }
    return 0;
}
