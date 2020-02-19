#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  string s;cin >>s;
  ll k;cin >>k;
  vector<pair<ll,ll>> v;
  string prev = s.substr(0,1);
  ll start = 0LL;
  ll cnt = 1LL;
  for(ll i=1;i<s.size();++i){
    auto tmp =s.substr(i,1);
    if(prev==tmp){
      ++cnt;
    } else {
      if(cnt>1LL)v.push_back(make_pair(start,cnt));
      start = i;
      prev = tmp;
      cnt = 1LL;
    }
  }
  if(cnt>1LL)v.push_back(make_pair(start,cnt));
  if(s.size()==1){
    cout << k/2 << endl;
    return 0;
  } else if(v.size()==1&&v[0].first+v[0].second==s.size()){
    cout << (v[0].second*k)/2 << endl;
    return 0;
  }
  ll out =0LL;
  for(auto& ele: v) out += ele.second/2LL;
  out *= k;
  ll edge_cnt =0LL;
  ll edge_cnt_end =0LL;
  ll edge_cnt_start =0LL;
  if(s.substr(0,1)==s.substr(s.size()-1,1)){
    if(s[0] == s[1]){
      edge_cnt += v[0].second;
      edge_cnt_start = v[0].second;
    } else {
      edge_cnt += 1LL;
    }
    if(s[s.size()-2] == s[s.size()-1]){
      edge_cnt += v[v.size()-1].second;
      edge_cnt_end = v[v.size()-1].second;
    } else {
      edge_cnt += 1LL;
    }
  }
  if(edge_cnt>0LL) {
    ll addedge = edge_cnt/2LL;
    out += addedge*(k-1LL);
    ll removeedge1 = edge_cnt_start/2LL;
    ll removeedge2 = edge_cnt_end/2LL;
    out -= removeedge1*(k-1LL);
    out -= removeedge2*(k-1LL);
  }
  cout << out << endl;
  return 0;
}
