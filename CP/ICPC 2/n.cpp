#include <iostream>
using namespace std;

int main() {

	char ch;
	int n, x;
	cin >> ch >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		while (x > 0) {
			cout << ch;
			x--;
		}
		cout << endl;
	}

	return 0;
}