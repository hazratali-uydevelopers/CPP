#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, n, count = 0;
	cin >> a >> b;

	if (a > b) {
		n = b;
	} else {
		n = a;
	}

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			for (int k = 0; k <= n; k++) {
				if (i + j + k == b) {
					count++;
				}
			}
		}
	}
	cout << count << endl;

	return 0;
}