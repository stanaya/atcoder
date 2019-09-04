#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n;cin>>n;
  map<ll, ll> mp;
  mp[0] = 1LL;
  ll sum = 0LL;
  repi(i,0,n){
    ll tmp; cin>> tmp;
    sum += tmp;
    if(mp.find(sum) == mp.end()){
      mp[sum] = 1LL;
    } else {
      mp[sum] += 1LL;
    }
  }
  ll cnt = 0LL;
  for (auto const& ele: mp) {
    if(ele.second > 1LL) cnt += ele.second*(ele.second - 1LL)/2LL;
  }
  cout << cnt << endl;
  return 0;
}
