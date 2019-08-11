#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n,m;cin >> n>> m;
  vector<bool> canmove(n+1,true);
  for(ll i=0;i<m;++i){
    ll t;cin>>t;
    canmove[t] = false;
  }
  ll dp[n+1];
  for(ll i=0;i<=n;++i) dp[i] = 0;
  if(canmove[1]) dp[1]=1;
  if(canmove[2]) dp[2]= dp[1]+1;
  for(ll i=3;i<=n;++i){
    if(canmove[i]) dp[i]= (dp[i-1]+dp[i-2])%mod;
  }
  cout << dp[n] << endl;
  return 0;
}
