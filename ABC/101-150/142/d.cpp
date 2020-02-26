#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)


ll gcd(ll a, ll b){
  if(b==0) return a;
  return gcd(b, a%b);
}

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
  ll a,b;cin>>a>>b;
  ll c = gcd(a,b);
  set<ll> st;
  st.insert(1LL);
  if(isPrime(c)){
    st.insert(c);
  } else{
    ll root_c = (ll)sqrt((double)c);
    for(ll i=2;i<=root_c;++i){
      if(c%i==0){
        if(isPrime(i))st.insert(i);
        if(isPrime(c/i))st.insert(c/i);
      }
    }
  }
  cout << st.size()<<endl;
  return 0;
}
