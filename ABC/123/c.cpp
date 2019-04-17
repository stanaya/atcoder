#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	long double n;
	cin >> n;
	vector<long double> v(5);
	for (int i = 0; i < 5; ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	long tmp = ceil(n / v[0]);
	unsigned long long out = 4 + tmp;
	cout << out << endl;
	return 0;
}
