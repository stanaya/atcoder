#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  ll n;cin >>n;
  ll out = 0LL;
  if(n%2LL==0LL){
    n/=2LL;//偶数の数
    ll div = 5LL;
    while(n/div>0LL){
      ll tmp = n/div;
      out += tmp;//10*nの数
      div*=5LL;
    }
  }
  cout << out << endl;
  return 0;
}
