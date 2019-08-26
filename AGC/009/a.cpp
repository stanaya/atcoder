#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n;cin >>n;
  vector<ll> a(n);
  vector<ll> b(n);
  for(ll i=0;i<n;++i)cin >> a[i] >> b[i];
  ll cnt = 0LL;
  for(ll j=0;j<n;++j){
    if( (a[n-1-j]+cnt)%(b[n-1-j]) != 0){
      cnt += (b[n-1-j]) - (a[n-1-j]+cnt)%(b[n-1-j]);
    }
  }
  cout << cnt << endl;
  return 0;
}
