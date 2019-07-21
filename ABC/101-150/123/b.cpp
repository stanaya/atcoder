#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;
	int t = 0;
	for (int i = 0; i < 5; ++i) {
		int tmp;
		cin >> tmp;
		if (tmp % 10 == 0) {
			t += tmp;
		} else {
			v.push_back(tmp);
		}
	}
	sort(v.begin(), v.end(), [](const int& x, const int& y){return x % 10 > y % 10;});
	for (size_t i = 0; i < v.size(); ++i) {
		t += v[i];
		if (t % 10 != 0 && i != v.size() -1) t = ((t / 10) + 1) * 10;
	}
	cout << t << endl;
	return 0;
}
