#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;cin >> n;
	vector<long> v(n);
	for (int  i = 0; i < n; ++i) cin >> v[i];
	while(v.size() > 1) {
		sort(v.begin(),v.end());
		auto vt = v;
		v.clear();
		v.push_back(vt[0]);
		for (int j = 1; j < vt.size(); ++j) {
			auto nvt = vt[j] % vt[0];
			if (nvt != 0) v.push_back(nvt);
		}
	}
	cout << v[0] << endl;
	return 0;
}
