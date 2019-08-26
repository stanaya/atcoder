#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n;cin >>n;
  vector<ll> v(n);
  int cnt_minus = 0;
  ll out = 0LL;
  for(ll i=0;i<n;++i){
    cin >> v[i];
    if(v[i]<0) {
      ++cnt_minus;
      v[i] *= -1;
    }
    out += v[i];
  }
  sort(all(v));
  if(cnt_minus%2 == 1) out -= 2* v[0];
  cout << out << endl;
  return 0;
}
