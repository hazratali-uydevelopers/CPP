#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x, temp;
	cin >> t;

	while (t--) {
		cin >> n >> x;
		int arr1[n], arr2[n], sum = 0;
		for (int i = 0; i < n; i++){
			cin >> arr1[i];
		}

		for (int i = 0; i < n; i++){
			cin >> arr2[i];
		}
		
		for (int i = 0; i < n; i++){
			if (arr1[i] >= x) {
				sum += arr2[i];
			}
		}
		cout << sum << endl;
	}
	
	return 0;
}