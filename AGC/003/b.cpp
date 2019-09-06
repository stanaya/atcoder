#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n;cin >> n;
  vector<ll> a(n);
  repi(i,0,n)cin >> a[i];
  ll cnt =0LL;
  cnt += a[0]/2LL;
  a[0]= a[0]%2LL;
  repi(i,1,n){
    if(a[i-1]>0 && a[i]>0){
      ++cnt;
      a[i-1] -= 1;
      a[i] -= 1;
    }
    cnt += a[i]/2LL;
    a[i]= a[i]%2LL;
  }
  cout << cnt << endl;
  return 0;
}
