#include <iostream>
using namespace std;

int main() {

	unsigned int n, x;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (x == 0) {
			cout << 0;
		} else {
			while (x != 0) {
				cout << x % 10 << " ";
				x /= 10;
			}
		}
		cout << endl;
	}

	return 0;
}