#include <bits/stdc++.h>
using namespace std;

void Print (int i, int n) { //print n to 1 using backtrack
    if (i > n){
    	return;
    }
    Print(i + 1, n);
    cout << i << endl;
}

int main () {
	Print(1, 4);
	return 0;
}