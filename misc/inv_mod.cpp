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
  ll b=mod;
  ll x,y;
  extGCD(a,b,x,y);
  cout << x%mod << endl;
  return 0;
}
