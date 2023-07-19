#include <iostream>
using namespace std;

int main() {

	char x;

	cin >> x;

	if (x >= 65 && x <= 90) {
		x += 32;
	} else {
		x -= 32;
	}

	cout << x;

	return 0;
}