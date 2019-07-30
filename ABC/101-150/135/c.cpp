#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n; cin >> n;
  vector<ll> a(n+1), b(n);
  for(ll i=0; i<n+1;++i) cin>>a[i];
  vector<ll> ad = a;
  for(ll i=0; i<n;++i) cin>>b[i];
  ll out_l =0;
  for(ll j=0;j<n;++j){
    if(b[j]<=a[j]){
      out_l += b[j];
    } else {
      out_l += a[j];
      ll res = b[j] - a[j];
      if(res>=a[j+1]){
        out_l += a[j+1];
        a[j+1] = 0;
      } else {
        out_l += res;
        a[j+1] -= res;
      }
    }
  }
  cout << out_l << endl;
  return 0;
}
