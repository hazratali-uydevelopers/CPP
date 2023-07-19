#include <iostream>
using namespace std;

int main() {
	
	unsigned int n, temp, max = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> temp;

		if (temp > max)
			max = temp;
	}

	cout << max << endl;

	return 0;
}