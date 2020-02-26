#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

ll iter_squ(ll a,ll p,ll m){
  if(p==0LL) return 1LL;
  if(p%2LL==0){
    ll t = iter_squ(a, p/2LL, m);
    return (t*t)%m;
  }
  return (a * iter_squ(a, p-1,m))%m;
}


int main() {
  ll a = 2LL;
  ll n = 1000000000;
  cout << iter_squ(a,n,mod)%mod << endl;
  ll simple = 1LL;
  for(ll i=0;i<n;++i){
    simple *= 2LL;
    simple %= mod;
  }
  cout << simple << endl;
  return 0;
}
