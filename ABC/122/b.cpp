#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


vector<int> find_all(const string s) {
	string search[] = {"A", "C", "G", "T"};
	vector<int> v;
	for (int i = 0; i < 4;++i) {
		int pos = s.find(search[i]);
		while  (pos != string::npos) {
			v.push_back(pos);
			pos = s.find(search[i], pos + 1);
		}
	}
	sort(v.begin(), v.end());
	return v;
}

int main() {
	string s;
	cin >> s;
	auto result = find_all(s);
	if (result.size() == 0) {
		cout << 0 << endl;
		return 0;
	}
	int max_l = 1;
	int tmp = 1;
	for (size_t i = 1; i < result.size(); ++i) {
		if (result[i] == result[i-1] + 1) {
			++tmp;
		} else {
			if (tmp > max_l) max_l = tmp;
			tmp = 1;
		}
	}
	if (tmp > max_l) max_l = tmp;
	cout << max_l << endl;
	return 0;
}
