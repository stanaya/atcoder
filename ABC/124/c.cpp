#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int main() {
	string s;
	cin >> s;
	int nl = 0;
	int nr = 0;
	string sl = s;
	string sr = s;
	for (size_t i = 1; i < s.size(); ++i ) {
		if (sl.substr(i,1) == sl.substr(i - 1,1)) {
			int t = (stoi(sl.substr(i,1)) + 1) % 2;
			sl.replace(i, 1, to_string(t));
			++nl;
		}
		if (sr.substr(sr.size() - 1 - i,1) == sr.substr(sr.size() - i,1)) {
			int tr = (stoi(sr.substr(sr.size() - 1 - i,1)) + 1) % 2;
			sr.replace(sr.size() - 1 - i, 1, to_string(tr));
			++nr;
		}
	}
	cout << min(nr, nl) << endl;
	return 0;
}
