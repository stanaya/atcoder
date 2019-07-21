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
  cin >>n;
  map<int, int> mp;
  for(i=0;i< n;++i) {
    int tmp;cin>> tmp;
    if(mp.find(tmp)!= mp.end()){
      mp[tmp] += 1;
    } else {
      mp[tmp] = 1;
    }
  }
  vector<pair<int, int>> v;
  for (auto const& ele: mp) v.push_back(make_pair(ele.first,ele.second));
  int max_cnt=0;
  if(v.size()==1) {
    int tmp_cnt = v[0].second;
    max_cnt = max(max_cnt,tmp_cnt);
  } else if(v.size()==2) {
    int tmp_cnt = v[0].second;
    if (v[1].first == v[0].first + 1) tmp_cnt += v[1].second;
    max_cnt = max(max_cnt,tmp_cnt);
  } else {
    for (j=0;j<v.size()-2;++j) {
      int tmp_cnt = v[j].second;
      if (v[j+1].first == v[j].first + 1) tmp_cnt += v[j+1].second;
      if (v[j+2].first == v[j].first + 2) tmp_cnt += v[j+2].second;
      max_cnt = max(max_cnt,tmp_cnt);
    }
  }
  cout << max_cnt << endl;
  return 0;
}
