#include <iostream>
using namespace std;

int main() {


	int x, count = 0;
	cin >> x;

	for (int i = 1; i <= x && count < 3; i++) {
		if (x % i == 0)
			count++;
	}

	if (count == 2) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}