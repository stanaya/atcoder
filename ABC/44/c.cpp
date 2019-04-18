#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
long long a;
long long dp[51][51][2550];

int main() {
	cin >> n >> a;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	sort(v.begin(), v.end());
	int max_v = *max_element(v.begin(), v.end());

	for (int j = 0; j < n + 1; ++j) {
		for (int k = 0; k < j+1; ++k) {
			for (int s = 0; s < n*max_v + 1; ++s) {
				if (j == 0 && k == 0 && s ==0) dp[j][k][s] = 1;
				if (j >= 1 && s < v[j - 1]) dp[j][k][s] = dp[j - 1][k][s];
				if (j >= 1 && s >= v[j - 1] && k >= 1) {
					dp[j][k][s] = dp[j - 1][k][s] + dp[j - 1][k - 1][s - v[j - 1]];
				}
			}
		}
	}
	long long cnt = 0;
	for (int k = 1; k < n + 1;++k ) {
			cnt += dp[n][k][a * k];
	}
	cout << cnt << endl;
	return 0;
}
