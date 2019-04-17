#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e, k;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> k;

	if (e - a > k) {
		cout << ":(";
	} else {
		cout << "Yay!";
	}
	return 0;
}
