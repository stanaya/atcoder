#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  ll n,k;cin >>n>>k;
  vector<ll> h(n);
  for(int i=0;i<n;++i)cin >> h[i];
  sort(all(h),greater<ll>());
  ll out = 0;
  for(int j=k;j<n;++j) out += h[j];
  cout << out << endl;
  return 0;
}
