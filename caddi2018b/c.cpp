#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
map<ll, ll> mp;

int main() {
  ll n,p;cin >>n>>p;
  ll val = (ll)pow((double)p,1.0d/(double)n);
  ll out = 1;
  for (ll i = val; i>= 2; --i) {
    if(p<i) break;
    ll dval = (ll)pow((double)i,(double)n);
    if(p%dval == 0){
      out *= i;
      p = p/dval;
    }
  }
  cout << out << endl;
  return 0;
}
