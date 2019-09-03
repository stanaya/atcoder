#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;

int main() {
  ll n,a,b; cin >>n >>a>>b;
  vector<ll> x(n), cost(n,mod);
  for(ll i=0LL; i< n;++i) cin >> x[i];
  cost[0] = 0;
  for(ll i=1LL; i< n;++i) {
    cost[i] = cost[i-1] + min(b , a*(x[i]-x[i-1]));
  }
  cout << cost[n-1] << endl;
  return 0;
}
