#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, x, y;
	cin >> n;

	while (n--) {
		cin >> x >> y;
		if (x < y) {
			cout << "PROFIT";
		} else if (x > y) {
			cout << "LOSS";
		} else {
			cout << "NEUTRAL";
		}
		cout << endl;
	}
	return 0;
}