#include <iostream>
using namespace std;

int main() {

	int a, b, c;

	cin >> a >> b >> c;

	//find min
	if (a <= b && a <= c) {
		cout << a;
	} else if (b <= a && b <= c) {
		cout << b;
	} else if (c <= a && c <= b) {
		cout << c;
	}

	cout << " ";

	//find max
	if (a >= b && a >= c) {
		cout << a ;
	} else if (b >= a && b >= c) {
		cout << b;
	} else if (c >= a && c >= b) {
		cout << c;
	}

	return 0;
}