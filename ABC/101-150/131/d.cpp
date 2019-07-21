#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n; cin >> n;
  vector<pair<ll, ll>> v;
  for (ll i=0; i < n;++i){
    ll a,b; cin >> a >> b;
    v.push_back(make_pair(a, b));
  }
  sort(all(v), [](pair<ll, ll>& a, pair<ll, ll>& b){return a.second < b.second;});
  bool ispossible = true;
  ll sum = 0;
  for (ll i=0; i < n;++i){
    sum += v[i].first;
    if(v[i].second < sum){
      ispossible = false;
      break;
    }
  }
  if(ispossible) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
