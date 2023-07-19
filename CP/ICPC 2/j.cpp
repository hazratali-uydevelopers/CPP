#include <iostream>
using namespace std;

int main() {

	int n, count = 0;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i && count < 3; j++) {
	 	if (i % j == 0)
	 		count++;
	    }
	    if (count == 2) {
			cout << i << " ";
		}
		count = 0;
	}

	return 0;
}