#include <iostream>
using namespace std;

int main() {

	int n, x;
	cin >> n;

	for (int i = n; 0 < i ; i--) {
		x = i;
		while (x > 0) {
			cout << "*";
			x--;
		}
		cout << endl;
	}

	return 0;
}