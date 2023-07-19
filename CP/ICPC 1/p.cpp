#include <iostream>
using namespace std;

int main() {

	int x;

	cin >> x;

	x /= 1000;

	cout << (x % 2 == 0 ? "EVEN" : "ODD");

	return 0;
}