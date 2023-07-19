#include <iostream>
using namespace std;

int main() {
	int n, x;
	long long int result = 1;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;

		if (x == 0) {
			cout << 1 << endl;
		} else {
			for (int j = 1; j <= x; j++) {
				result *= j;
			}
			cout << result << endl;
			result = 1;
		}
	}
	
	return 0;
}