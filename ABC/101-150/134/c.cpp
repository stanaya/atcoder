#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n; cin>> n;
  vector<pair<ll,ll>> v;
  for(ll i=0;i<n;++i){
    ll val;cin >> val;
    v.push_back(make_pair(i, val));
  }
  sort(all(v),[](pair<ll,ll>& a, pair<ll,ll>& b){return a.second < b.second;});
  ll maxele = v[n-1].second;
  ll maxele2 = v[n-2].second;
  sort(all(v),[](pair<ll,ll>& a, pair<ll,ll>& b){return a.first < b.first;});
  for(ll i=0;i<n;++i){
    if(v[i].second==maxele){
      cout << maxele2 << endl;
    } else {
      cout << maxele << endl;
    }
  }

  return 0;
}
