#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
map<int, ll> mp;


void primeFactorization(int x){
  ll sqrt_x = (ll)sqrt((double)x);
  for(int j=2;j<=x;++j){
    if(x%j==0){
      ll cnt =0;
      while(x%j==0){
        ++cnt;
        x=x/j;
      }
      if(mp.find(j) == mp.end()){
        mp[j] = cnt;
      } else {
        mp[j] += cnt;
      }
    }
  }
  if(x> sqrt_x) mp[x] = 1LL;
}

int main() {
  int n; cin >> n;
  if(n==1){
    cout << 1 << endl;
    return 0;
  } else {
    for(int i=2;i<=n;++i){
      primeFactorization(i);
    }
  }
  ll out =1LL;
  for(auto const& e: mp){
    //cout << e.first <<  " " << e.second << endl;
    out *= (e.second + 1);
    out = out % mod;
  }
  cout << out << endl;
  return 0;
}
