#include <iostream>
using namespace std;

int main() {
	
	int n, x, y;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x >> y;

		if (x > y) {
			int temp = x;
			x = y;
			y = temp;
		}

		int sum = 0;
		for (int j = x + 1; j < y; j++) {
			if (j % 2 != 0) {
				sum += j;
			}
		}
		cout << sum << endl;
	}
	
	return 0;
}