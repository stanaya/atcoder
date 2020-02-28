#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  ll h,n;cin >> h>>n;
  ll inf = mod;
  vector<ll> a(n),b(n);
  for(ll i=0;i<n;++i)cin>>a[i]>>b[i];
  vector<vector<ll>> dp(6*h+1, vector<ll>(n+1, inf));
  for(ll i=0;i<n+1;++i)dp[0][i] = 0;
  ll out =inf;
  for(ll j=1;j<=6*h;++j){
    for(ll i=1;i<=n;++i){
      if(j-a[i-1]>=0){
        dp[j][i] = min(dp[j-a[i-1]][i] + b[i-1],dp[j][i-1]);
      } else {
        dp[j][i] = dp[j][i-1];
      }
    }
    if(j>=h)out = min(out,dp[j][n]);
  }
  cout << out << endl;
  return 0;
}
