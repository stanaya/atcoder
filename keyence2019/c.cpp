#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  ll n;cin >>n;
  vector<ll> a(n), b(n), diff_plus;
  ll sum_a =0;
  ll sum_b =0;
  ll cnt = 0;
  ll sum_minus = 0;
  for(ll i=0;i<n;++i) {
    cin >> a[i];
    sum_a += a[i];
  }
  for(ll i=0;i<n;++i) {
    cin >> b[i];
    sum_b += b[i];
    ll diff = a[i] - b[i];
    if(diff > 0) {
      diff_plus.push_back(diff);
    } else if(diff < 0) {
      ++cnt;
      sum_minus += diff;
    }
  }
  if(sum_a< sum_b){
    cout << -1 << endl;
    return 0;
  }
  sort(all(diff_plus), greater<ll>());
  for(ll i=0;i<diff_plus.size();++i){
    if(sum_minus>=0) break;
    sum_minus += diff_plus[i];
    ++cnt;
  }
  cout << cnt << endl;


  return 0;
}
