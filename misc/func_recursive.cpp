#include <iostream>
#include <map>
#include <string>
#include <cmath>
using namespace std;
map<string, int> mp;

int dfs(const string s, const int cnt) {
	if(mp.find(s) != mp.end()) return cnt;
	if (s.size() < 2) return cnt;
	int out = cnt;
	for (int i = 0; i < s.size() - 1; ++i) {
		string sub = s.substr(i,2);
		if (sub == "01" || sub == "10") {
			string t = s;
			t.erase(i,2);
			out = max(dfs(t, cnt + 1),out);
			if (mp.find(t) == mp.end()) mp[t] = out;
		}
	}
	return out;
}

int main() {
	string s; cin >> s;
	cout << 2 * dfs(s,0) << endl;
	return 0;
}
