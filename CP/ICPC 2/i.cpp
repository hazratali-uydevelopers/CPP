#include <iostream>
using namespace std;

int main() {

	unsigned int forward, backward = 0, remainder;

	cin >> forward;
	unsigned int backup = forward;

	while (forward != 0) {
		remainder = forward % 10;
		backward = backward * 10 + remainder;
		forward /= 10;
	}

	cout << backward << endl;
	if (backup - backward == 0) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}