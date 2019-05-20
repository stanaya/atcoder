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
  cin >> n;
  map<LL, int> mp;
  for (i=0;i<n;++i) {
    int t; cin >> t;
    if (mp.find(t) != mp.end()) {
      mp[t] +=1;
    } else {
      mp[t] =1;
    }
  }
  vector<pair<LL, int>> v;
  for (auto const& ele: mp) {
    v.push_back(make_pair(ele.first,ele.second));
  }
  sort(v.begin(), v.end(), [](const pair<LL, int>& a,const pair<LL, int>& b){return a.first > b.first;});
  int edge_cnt =4;
  std::vector<LL> ve;
  while(edge_cnt>0) {
    bool found = false;
    for (i=0; i< v.size();++i){
      if(v[i].second >= 2) {
        ve.push_back(v[i].first);
        v[i].second -= 2;
        edge_cnt -= 2;
        found = true;
        break;
      }
    }
    if(!found) break;
  }
  if (ve.size() == 2){
    cout << ve[0] * ve[1] << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}
