#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	string s; cin >> s;
	auto z = count(s.begin(), s.end(), '0');
	auto o = count(s.begin(), s.end(), '1');
	cout << 2 * min(z,o) << endl;
	return 0;
}
