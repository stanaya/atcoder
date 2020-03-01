#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

bool isPrime(ll x){
  ll root_x = (ll)sqrt((double)x);
  bool prime = true;
  if(x<=1LL){
    return false;
  }
  for(ll i=2;i<=root_x;++i){
    if(x%i==0){
      prime = false;
      break;
    }
  }
  return prime;
}

int main() {
  vector<ll> v(100000+1);
  ll cnt=0;
  for(ll i=1;i<100001;++i){
    if(i%2==1){
      if(isPrime(i)&&isPrime((i+1LL)/2LL))++cnt;
    }
    v[i] = cnt;
  }
  ll q;cin>>q;
  for(ll i=0;i<q;++i){
    ll l,r;cin>>l>>r;
    cout << v[r] - v[l-1] <<endl;
  }
  return 0;
}
