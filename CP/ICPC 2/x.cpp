#include<iostream>
#include<cmath>
using namespace std;

int main () {
	int n, x;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;

		int sum = 0;
		while(x != 0) {
			sum += x % 2;
			x /= 2;
		}

		int y = 0;
		for (int j = 0; j < sum; j++) {
			y += pow(2,j);
		}

		cout << y << endl;
	}

	return 0;
}