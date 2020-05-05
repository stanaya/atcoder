#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  int k,n;cin >> k>> n;
  vector<int> a(n);
  int da = 0;
  for(int i=0;i<n;++i) cin >> a[i];
  for(int i=0;i<n-1;++i) da = max(da,a[i+1] - a[i]);
  da = max(da, k+a[0] - a[n-1]);
  cout << k-da << endl;
  return 0;
}
