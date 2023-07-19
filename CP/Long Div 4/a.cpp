#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, x, y;
	cin >> n;

	while (n--) {
		cin >> x >> y;
		if (x >= y * 2) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}