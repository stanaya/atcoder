#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

bool isPrime(ll x){
  ll root_x = (ll)sqrt((double)x);
  bool prime = true;
  for(ll i=2;i<=root_x;++i){
    if(x%i==0){
      prime = false;
      break;
    }
  }
  return prime;
}

int main() {
  ll x;cin>>x;
  if(x%2LL==0&&x!=2LL)++x;
  while(true){
    if(isPrime(x)){
      break;
    } else {
      x+=2LL;
    }
  }
  cout << x << endl;
  return 0;
}
