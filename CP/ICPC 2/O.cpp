#include <iostream>
using namespace std;

int main() {

	int n, x;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		x = i;
		while (x > 0) {
			cout << "*";
			x--;
		}
		cout << endl;
	}

	return 0;
}