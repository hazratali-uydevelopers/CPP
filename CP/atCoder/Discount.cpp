#include <bits/stdc++.h>
using namespace std;

int main() {
    const int total_percentage = 100;
    double regular_price, discounted_price;
    cin >> regular_price >> discounted_price;
    double discount_percentage = ((regular_price - discounted_price) / regular_price) * total_percentage;
     cout << fixed << setprecision(18) << discount_percentage << endl;
    return 0;
}

