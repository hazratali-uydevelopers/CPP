#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float x;
	cin >> x;
	int y = (int)x;

	cout << setprecision(3);

	if (y - x == 0) {
		cout << "int " << y;
	} else {
		cout << "float " << y << " " << (x - y);
	}
	
	return 0;
}