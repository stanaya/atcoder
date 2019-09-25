#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n;cin >> n;
  map<int,ll> mp;
  repi(i,0,n){
    int t;cin >> t;
    if(mp.find(t) == mp.end()){
      mp[t] = 1LL;
    } else {
      mp[t] += 1LL;
    }
  }
  ll cnt_one = 0LL;
  ll cnt_not_one = 0LL;
  ll sum_not_one = 0LL;
  for (auto const& ele: mp) {
    if(ele.second == 1LL){
      ++cnt_one;
    } else {
      ++cnt_not_one;
      sum_not_one += ele.second;
    }
  }
  sum_not_one -= cnt_not_one;
  cnt_one += cnt_not_one;
  if(sum_not_one%2LL != 0){
    --cnt_one;
  }
  cout << cnt_one << endl;
  return 0;
}
