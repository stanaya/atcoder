#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
float a;
vector<int> v;
float memo[50][2500];
long cnt = 0;

void dfs(const int id, const float num, const float sum) {
	if (id > n) return;
	if (id == n && num == 0.0) return;
	if (id == n && sum / num == a) {
		++cnt;
		return;
	}
	dfs(id+1, num + 1.0, sum + v[id]);
	dfs(id+1, num, sum);
	return;
}

int main() {
	cin >> n >> a;
	v.resize(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	sort(v.begin(),v.end());
	dfs(0, 0.0, 0.0);
	cout << cnt << endl;
	return 0;
}
