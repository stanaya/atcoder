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
  ll n;cin>>n;
  bool prime = isPrime(n);
  if(n==1){
    cout << "Not Prime" << endl;
    return 0;
  }
  if(!prime){
    ll d1 = n%10LL;
    ll sum = 0;
    while(n>0LL){
      sum+=n%10LL;
      n/=10LL;
    }
    if(d1%2LL!=0LL&&d1!=5LL&&sum%3LL!=0LL)prime = true;
  }
  if(prime){
    cout << "Prime" << endl;
  } else {
    cout << "Not Prime" << endl;
  }

  return 0;
}
