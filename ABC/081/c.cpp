#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
using namespace std;
typedef long long LL;
LL i,j,k,n,m;
LL mod=1000000007;
string s;

int main() {
  cin >> n >> k;
  map<int, int> mp;
  for (i=0;i<n;++i) {
    int t; cin >> t;
    if (mp.find(t) != mp.end()) {
      mp[t] +=1;
    } else {
      mp[t] =1;
    }
  }
  vector<pair<int, int>> v;
  for (auto const& ele: mp) {
    v.push_back(make_pair(ele.first,ele.second));
  }
  sort(v.begin(), v.end(), [](const pair<int, int>& a,const pair<int, int>& b){return a.second < b.second;});
  int cnt =0;
  if (v.size() > k){
  	for (j=0;j<v.size() - k; ++j) cnt += v[j].second;
  }
  cout << cnt << endl;
  return 0;
}
