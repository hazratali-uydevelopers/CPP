#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

	int a, b, x = 1, gcd = 0;
	cin >> a >> b;

	while (true) {
		if (x > a || x > b) {
			break;
		} else {
			if (a % x == 0 && b % x == 0) {
				gcd = x;
			}
			x++;
		}
	}

	cout << gcd << endl;
	cout << __gcd(a, b) << endl;

	return 0;
}