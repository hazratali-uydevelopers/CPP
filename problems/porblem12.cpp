#include <bits/stdc++.h>
using namespace std;

int fab(int n) {
	if (n <= 1) {
		return n;
	}
	return fab(n - 1) + fab(n - 2);
}

int main () {
	cout << fab(45);
	return 0;
}