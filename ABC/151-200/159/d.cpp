#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  ll n;cin >> n;
  vector<ll> v(n);
  map<ll,ll> mp;
  for(ll i=0;i<n;++i){
    cin >> v[i];
    if(mp.find(v[i])!=mp.end()){
      ++mp[v[i]];
    } else {
      mp[v[i]] = 1;
    }
  }
  ll out = 0;
  for(const auto& ele : mp){
    out += ele.second*(ele.second-1)/2;
  }
  for(ll i=0;i<n;++i){
    cout << out - mp[v[i]]+1 << endl;
  }
  return 0;
}
