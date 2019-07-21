#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n; cin>>n;
  std::vector<ll> a(n),b(n);
  for(ll i=0;i<n;++i) cin>>a[i];
  bool valid = true;
  for(ll j=n-1;j>=0;--j){
    if(j>n/2){
      b[j] = a[j];
    } else if(j==0) {
      continue;
    } else {
      ll tmp=j+j+1;
      ll cnt_ball =0;
      while(tmp<n){
        cnt_ball += b[tmp];
        tmp += j+1;
      }
      if(cnt_ball%2==a[j]){
        b[j] = 0;
      } else {
        b[j] = 1;
      }
    }
  }
  ll cnt_ball = accumulate(b.begin()+1,b.end(),0);
  if(cnt_ball%2==a[0]){
    b[0] = 0;
  } else {
    b[0] = 1;
    ++cnt_ball;
  }
  cout << cnt_ball << endl;
  for(ll i=0;i<n;++i){
    if(b[i]==1) cout << i+1 << endl;
  }
  return 0;
}
