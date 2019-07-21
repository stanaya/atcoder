#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int cnt = b / a;
	int out;
	if (cnt > c) {out = c;} else {out = cnt;}
	cout << out << endl;
	return 0;
}
