#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, out;
	cin >> a >> b;
	if (a > b) {
		out +=a;
		--a;
	} else {
		out +=b;
		--b;
	}
	if (a > b) {
		out +=a;
		--a;
	} else {
		out +=b;
		--b;
	}
	cout << out << endl;
	return 0;
}
