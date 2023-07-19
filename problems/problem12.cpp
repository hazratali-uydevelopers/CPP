#include <bits/stdc++.h>
using namespace std;
void printSub(int i, vector<int> &arr, vector<int> &v, int target) {
	if (i == arr.size()) {
		if (target == 0) {
			for (auto it : v){
				cout << it << " ";
			}
			cout << endl;
		}
		return;
	}

	v.push_back(arr[i]);
	printSub(i + 1, arr, v, target - arr[i]);//take
	v.pop_back();
	printSub(i + 1, arr, v, target);//not take
}

int main () {
	vector<int> arr = {2, 3, 5};
	vector<int> v;
	printSub(0, arr, v, 8);
	return 0;
}