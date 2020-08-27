#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  ll n;cin >>n;
  ll out =0;
  ll prev =0;
  for (ll i=0;i<n;++i){
    ll a;cin>>a;
    if(a<=prev){
      out +=prev-a;
    } else {
      prev = a;
    }
  }
  cout << out << endl;
  return 0;
}
