#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n,q; cin >> n >> q;
	string s; cin >> s;
	vector<int> v(n + 1);
	v[0] = 0;
	for (int m = 1; m < n; ++m) {
		v[m] = v[m - 1];
		string sub = s.substr(m - 1,2);
		if (sub == "AC") v[m] += 1;
	}
	v[n] = v[n - 1];
	for (int i = 0; i < q; ++i) {
		int l,r; cin >> l >> r;
		cout <<  v[r - 1] - v[l - 1] << endl;
	}
	return 0;
}
