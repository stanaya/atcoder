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

int main() {
  string s,t;
  cin >> s>>t;
  map<string, int> mps,mpt;
  for(i=0;i< s.size();++i) {
    string subs = s.substr(i,1);
    string subt = t.substr(i,1);
    if(mps.find(subs)!= mps.end()){
      mps[subs] += 1;
    } else {
      mps[subs] = 1;
    }
    if(mpt.find(subt)!= mpt.end()){
      mpt[subt] += 1;
    } else {
      mpt[subt] = 1;
    }
  }
  vector<pair<string, int>> vs;
  for (auto const& ele: mps) vs.push_back(make_pair(ele.first,ele.second));
  sort(vs.begin(), vs.end(), [](const pair<string, int>& a,const pair<string, int>& b){return a.second < b.second;});

  vector<pair<string, int>> vt;
  for (auto const& ele: mpt) vt.push_back(make_pair(ele.first,ele.second));
  sort(vt.begin(), vt.end(), [](const pair<string, int>& a,const pair<string, int>& b){return a.second < b.second;});

  string out = "Yes";
  if (vs.size()!=vt.size()) {
    out = "No";
  } else {
    for (j=0;j<vs.size();++j) {
      if(vs[j].second!=vt[j].second) out = "No";
    }
  }
  cout << out << endl;

  return 0;
}
