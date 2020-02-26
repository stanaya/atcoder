#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

ll extGCD(ll a,ll b,ll &x,ll &y) {
  if (b == 0) {
    x = 1;
    y = 0;
    return a;
  }
  ll d = extGCD(b, a%b, y, x);
  y -= a/b * x;
  return d;
}

int main() {
  ll a=10000;
  ll fac_inv_a[a];
  ll prev=1LL;
  for(ll i=1LL;i<=a;++i){
    ll x,y;
    extGCD(i,mod,x,y);
    x = (x%mod + mod)%mod;
    fac_inv_a[i-1] = (x*prev)%mod;
    prev=fac_inv_a[i-1];
  }
  cout << fac_inv_a[a-1] << endl;
  return 0;
}
