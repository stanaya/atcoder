#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  string s;cin >> s;
  std::vector<int> v;
  int cnt_l=0;
  int cnt_r=1;
  for(int i=0; i< s.size()-1;++i){
    string sub = s.substr(i,2);
    if(sub == "RL")v.push_back(i);
  }
  vector<pair<int, int>> p;
  for(int i=0; i< v.size();++i){
    int cnt_r =0;
    int cnt_l =0;
    for(int j=v[i];j>=0;--j){
      string sub = s.substr(j,1);
      if(sub=="R"){
        ++cnt_r;
      } else {
        break;
      }
    }
    for(int j=v[i]+1;j<s.size();++j){
      string sub = s.substr(j,1);
      if(sub=="L"){
        ++cnt_l;
      } else {
        break;
      }
    }
    p.push_back(make_pair(cnt_r, cnt_l));
  }
  std::vector<int> vout(s.size(),0);
  for(int i=0; i<v.size();++i){
    vout[v[i]] = p[i].second/2 + 1 + (p[i].first - p[i].first/2 - 1);
    vout[v[i]+1] = p[i].first/2 + 1 + (p[i].second - p[i].second/2 - 1);
  }
  for(int i=0; i<vout.size();++i){
    cout << vout[i] << " ";
  }
  return 0;
}
