#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n;cin>> n;
  vector<ll> a(n+2);
  a[0] = 0;
  ll sum_all = 0;
  for(ll i=0;i<n;++i) cin >> a[i+1];
  a[n+1] = 0;
  for(ll i=0;i<n+1;++i) {
    sum_all += abs(a[i+1] - a[i]);
  }
  vector<ll> val(n);
  for(ll i=1;i<n+1;++i) {
    val[i-1] = abs(a[i+1] - a[i-1]) - abs(a[i] - a[i-1])- abs(a[i+1] - a[i]);
  }
  for(ll i=0;i<n;++i) {
    cout << sum_all + val[i] << endl;
  }

  return 0;
}
