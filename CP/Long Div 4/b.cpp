#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, k;
	cin >> t;

	while (t--) {
		cin >> x >> y >> k;
		if (x > y) {
			int temp = x;
			x = y;
			y = temp;
		}

		cout << ceil((y - x) / (float)k) << endl;
	}

	return 0;
}