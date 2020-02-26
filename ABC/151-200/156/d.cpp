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

ll iter_squ(ll a,ll p,ll m){
  if(p==0LL) return 1LL;
  if(p%2LL==0){
    ll t = iter_squ(a, p/2LL, m);
    return (t*t)%m;
  }
  return (a * iter_squ(a, p-1,m))%m;
}

int main() {
  ll n,a,b;cin>>n>>a>>b;
  ll out = iter_squ(2LL,n,mod) - 1LL;
  ll comb_a,comb_b,comb=1LL;
  for(ll i=1LL;i<=b;++i){
    comb *= (n-i+1LL);
    comb %= mod;
    ll x,y;
    extGCD(i,mod,x,y);
    x = (x%mod + mod)%mod;
    comb *= x;
    comb %= mod;
    if(i==a) comb_a = comb;
    if(i==b) comb_b = comb;
  }
  out -= comb_b;
  if(out<0)out+=mod;
  out -= comb_a;
  if(out<0)out+=mod;
  cout << out << endl;
  return 0;
}
