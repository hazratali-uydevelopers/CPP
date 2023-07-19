#include <iostream>
using namespace std;

int main() {

	int a, b, c, d;
	
	cin >> a >> b >> c >> d;

	a %= 100;
	b %= 100;
	c %= 100;
	d %= 100;

	if (((a * b * c * d) % 100 == 0) || (((a * b * c * d) / 10) % 10 == 0)){
		cout << "0";
	} 

	cout << (a * b * c * d) % 100 << endl;


	return 0;
}