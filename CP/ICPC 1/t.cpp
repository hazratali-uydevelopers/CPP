#include <iostream>
using namespace std;

int main() {

	int a, b, c, temp, x, y, z;

	cin >> a >> b >> c;

	x = a;
	y = b;
	z = c;

	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}

	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}

	if (a > c) {
		temp = a;
		a = c;
		c = temp;
	}

	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}

	cout << a << "\n" << b << "\n" << c << "\n" << endl;
	cout << x << "\n" << y << "\n" << z;

	return 0;
}