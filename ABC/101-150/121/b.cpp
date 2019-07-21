#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m, c;
	cin >> n >> m >> c;
	vector<int> b(m);
	vector<vector<int>> a;
	for (int i = 0; i < m; ++i) {
		cin >> b[i];
	}
	for (int j = 0; j < n; ++j) {
		vector<int> tmp;
		for (int k = 0; k < m; ++k) {
			int ele;
			cin >> ele;
			tmp.push_back(ele);
		}
		a.push_back(tmp);
	}
	int out = 0;
	for (int l = 0; l < n; ++l) {
		int tmp = c;
		for (int o = 0; o < m; ++o) {
			tmp += a[l][o] * b[o];
		}
		if (tmp > 0) ++out;
	}
	cout << out << endl;
	return 0;
}
