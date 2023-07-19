#include <iostream>
using namespace std;

int main() {

	int x, y, n, backup, count = 0;
	cin >> x >> y;

	for (int i = x; i <= y; i++) {
		n = i;
		backup = n;

		while (n != 0) {
			if (n % 10 == 4 || n % 10 == 7) {
				n /= 10;
			} else {
				break;
			}
		}

		if (n == 0) {
			cout << backup << " ";
			count++; //counting for magic numbers
		}
	}

	if (count == 0) {
		cout << -1 << endl;
	}

	
	return 0;
}