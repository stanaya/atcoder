#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;

int main() {
	long n, m; cin >> n >> m;
	vector<pair<long, long>> p(n);
	for (int i = 0; i < n; ++i) {
		long a, b; cin >> a >> b;
		p[i] = make_pair(a,b);
	}
	sort(p.begin(), p.end());
	long price = 0;
	for (auto itr = p.begin(); itr != p.end(); ++itr) {
		if (m < itr->second) {
			price += m * itr->first;
			break;
		} else {
			price += itr->second * itr->first;
			m -= itr->second;
		}
	}
	cout << price << endl;
	return 0;
}
