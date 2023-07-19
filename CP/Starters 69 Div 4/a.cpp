#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;

	while (t--) {
		cin >> a >> b >> c;
		if (a == b || b == c|| c == a) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
	
	return 0;
}