#include <iostream>
using namespace std;

int main() {
	
	int n, stars = 3;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		
		for (int j = n - i; 0 < j; j--) {
			cout << " ";
		}

		if (i == 1) {
			cout << "*";
		} else {
			for (int x = 1; x <= stars; x++) {
				cout << "*";
			}
			stars += 2;
		}

		cout << endl;
	}

	stars -= 2;

	for (int i = 0; i < n ; i++) {
		for (int j = i; 0 < j; j--) {
			cout << " ";
		}

		for (int x = stars; x >= 1; x--) {
			cout << "*";
		}
		stars -= 2;
		
		cout << endl;
	}
	
	return 0;
}