#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n;
  ll h;cin >> n >> h;
  vector<ll> va,vb;
  repi(i,0,n){
    ll a,b;cin >> a>>b;
    va.push_back(a);
    vb.push_back(b);
  }
  sort(all(va));
  sort(all(vb));
  ll max_a = va[n-1];
  ll cnt = 0LL;
  for(int j=n-1;j>=0;--j){
    if(vb[j] < max_a || h<=0) break;
    h -= vb[j];
    ++cnt;
  }
  if(h>0){
    cnt += h/max_a;
    if(h%max_a != 0) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}
