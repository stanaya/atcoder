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
  map<int, int> mpe,mpo;
  std::vector<int> v(n);
  for (i=0;i<n;++i) {
    cin >> v[i];
    if (i%2==0){
      if (mpe.find(v[i]) != mpe.end()) {
        mpe[v[i]] +=1;
      } else {
        mpe[v[i]] =1;
      }
    } else {
      if (mpo.find(v[i]) != mpo.end()) {
        mpo[v[i]] +=1;
      } else {
        mpo[v[i]] =1;
      }
    }
  }
  vector<pair<int, int>> ve,vo;
  for (auto const& elee: mpe) {
    ve.push_back(make_pair(elee.first,elee.second));
  }
  for (auto const& eleo: mpo) {
    vo.push_back(make_pair(eleo.first,eleo.second));
  }
  sort(ve.begin(), ve.end(), [](const pair<int, int>& a,const pair<int, int>& b){return a.second > b.second;});
  sort(vo.begin(), vo.end(), [](const pair<int, int>& a,const pair<int, int>& b){return a.second > b.second;});
  int e,o;
  if (ve[0].first!=vo[0].first) {
    e = ve[0].first;
    o = vo[0].first;
  } else {
    if (ve.size() == 1 && vo.size() == 1){
      e = 0;
    } else if(ve.size() == 1 && vo.size() > 1) {
      e = ve[0].first;
      o = vo[1].first;
    }else if(ve.size() >1 && vo.size() == 1) {
      e = ve[1].first;
      o = vo[0].first;
    } else {
      if (ve[0].second + vo[1].second > ve[1].second + vo[0].second) {
        e = ve[0].first;
        o = vo[1].first;
      } else {
        e = ve[1].first;
        o = vo[0].first;
      }
    }
  }
  int cnt =0;
  for (i=0;i<n;++i) {
    if (i%2==0){
      if (v[i] != e) ++cnt;
    } else {
      if (v[i] != o) ++cnt;
    }
  }
  cout << cnt << endl;
  return 0;
}
