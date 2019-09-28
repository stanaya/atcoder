#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  ll n,k,q; cin >> n >> k >> q;
  vector<ll> v(n,0LL);
  for(ll i=0; i<q;++i){
    ll t; cin >> t;
    v[t-1] += 1;
  }
  for(ll j=0;j<n;++j){
    if(k - q + v[j]>0){
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
