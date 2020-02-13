#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  string s;cin >>s;
  vector<pair<ll,ll>> v;
  ll cnt = 1LL;
  for(int i=0;i<s.size()-1;++i){
    if(s[i]==s[i+1]){
      ++cnt;
    } else{
      if(s[i]=='<'){
        v.push_back(make_pair(1LL,cnt));
      } else {
        v.push_back(make_pair(2LL,cnt));
      }
      cnt =1LL;
    }
  }
  if(s[s.size()-1]=='<'){
    v.push_back(make_pair(1LL,cnt));
  } else {
    v.push_back(make_pair(2LL,cnt));
  }
  vector<ll> out(s.size()+1,0);
  ll val = 0LL;
  int id = 0;
  for(int j=0;j<v.size();++j){
    if(v[j].first==1){
      for(ll k=0;k<v[j].second;++k){
        out[id] = val;
        ++id;
        ++val;
      }
      out[id] = val;
    } else {
      ll t =0LL;
      for(ll k=v[j].second;k>=0;--k){
        out[id+k] = max(t, out[id+k]);
        ++t;
      }
      val = 0LL;
      id += v[j].second;
    }
  }
  ll sum = 0LL;
  for(int l=0;l<out.size();++l){
    sum += out[l];
    //cout << out[l] << endl;
  }
  cout << sum << endl;
  return 0;
}
