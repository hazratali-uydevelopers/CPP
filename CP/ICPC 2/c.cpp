#include <iostream>
using namespace std;

int main() {

	int a, n, even = 0, odd = 0, positive = 0, negative = 0;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a % 2 == 0) {
			even++;
		} else {
			odd++;
		}

		if (a == 0) {
			continue;
		} else if(a > 0) {
			positive++;
		} else {
			negative++;
		}
	}

	cout << "Even: " << even << endl;
	cout << "Odd: " << odd << endl;
	cout << "Positive: " << positive << endl;
	cout << "Negative: " << negative << endl;
	
	return 0;
}