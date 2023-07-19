#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int firstNumber = 0, secondNumber = 1, thirdNumber;

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cout << firstNumber << " ";
		} else if (i == 1) {
			cout << secondNumber << " ";
		} else {
			thirdNumber = secondNumber + firstNumber;
			cout << firstNumber + secondNumber << " ";
			firstNumber = secondNumber;
			secondNumber = thirdNumber;
		}
	}
	return 0;
}