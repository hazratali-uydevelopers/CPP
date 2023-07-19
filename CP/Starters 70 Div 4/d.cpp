#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, x, y, z;
	cin >> n;

	while (n--) {
		cin >> x >> y;
		y = pow(2, y);
		while (x--) {
			z = y / 2;
			y = y / 2;
		}
		cout << z << endl;
	}
	return 0;
}