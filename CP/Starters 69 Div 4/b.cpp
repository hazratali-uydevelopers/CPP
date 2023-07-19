#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, x, y;
	cin >> n;

	while (n--) {
		cin >> x >> y;
		if ((x + y) % 2 == 0) {
			cout << (x + y) / 2;
		} else {
			cout << -1;
		}
		cout << endl;
	}
	return 0;
}