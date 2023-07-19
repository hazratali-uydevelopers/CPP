#include <iostream>
using namespace std;

int main() {

	long long int a, b;
	char x;

	cin >> a >> x >> b;
	
	if (x == '+') {
		a += b;
	} else if (x == '-') {
		a -= b;
	} else if (x == '*') {
		a *= b;
	} else {
		a /= b;
	}

	cout << a;

	return 0;
}