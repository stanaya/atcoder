#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  ll a,b;cin>>a>>b;
  ll n=b-a+1LL;
  if(n==1LL){
    cout << a << endl;
    return 0;
  }
  ll out;
  if(b%2LL==0){
    --n;
    if(a%2LL==0LL){
      if((n/2LL)%2LL==0LL){
        out = b^0LL;
      } else{
        out = b^1LL;
      }
    } else {
      --n;
      if((n/2LL)%2LL==0LL){
        out = b^0LL^a;
      } else{
        out = b^1LL^a;
      }
    }
  } else{
    if(a%2LL==0LL){
      if((n/2LL)%2LL==0LL){
        out = 0LL;
      } else{
        out = 1LL;
      }
    } else {
      --n;
      if((n/2LL)%2LL==0LL){
        out = 0LL^a;
      } else{
        out = 1LL^a;
      }
    }
  }
  cout << out << endl;
  return 0;
}
