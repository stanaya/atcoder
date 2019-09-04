#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  ll n;cin >>n;
  vector<ll> h(n);
  for(ll i=0; i< n;++i)cin >> h[i];
  ll max_len = 0;
  ll start =0;
  ll end =0;
  for (ll i=1; i< n;++i){
    if(h[i-1]>=h[i]){
      ++end;
    } else {
      max_len = max(max_len, end - start);
      start =i;
      end = i;
    }
  }
  max_len = max(max_len, end - start);
  cout << max_len << endl;
  return 0;
}
