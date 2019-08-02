#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n;cin>>n;
  vector<ll> a(3*n);
  for(ll i=0;i<3*n;++i){
    cin>>a[i];
  }
  sort(all(a), greater<ll>());
  ll sum=0LL;
  for(ll j=0;j<n;++j){
    sum += a[2*j+1];
  }
  cout << sum << endl;
  return 0;
}
