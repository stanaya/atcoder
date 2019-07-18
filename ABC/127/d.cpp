#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n,m;cin>>n>>m;
  ll min_val = 100000000007;
  map<ll, ll> mp;
  for(int i=0;i<n;++i){
    ll t;cin>>t;
    min_val = min(min_val, t);
    if(mp.find(t) != mp.end()){
      mp[t] = mp[t] + 1;
    } else {
      mp[t] = 1;
    }
  }
  for(int i=0;i<m;++i){
    ll b,c;cin>>b>>c;
    if(c<min_val) continue;
    if(mp.find(c) != mp.end()){
      mp[c] = mp[c] + b;
    } else {
      mp[c] = b;
    }
  }
  vector<pair<ll, ll>> v;
  for (auto const& ele: mp) {
    v.push_back(make_pair(ele.first,ele.second));
  }
  sort(all(v),[](pair<ll,ll>& a,pair<ll,ll>& b){return a.first > b.first;});
  ll out =0;
  ll rest = n;
  for (auto const& ele: v)
  {
    if(rest==0) break;
    ll cnt = min(rest, ele.second);
    out += ele.first * cnt;
    rest = rest - cnt;
  }
  cout << out << endl;
  return 0;
}
