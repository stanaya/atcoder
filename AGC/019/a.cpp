#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n,q,h,s,d; cin >> q>>h>>s>>d;
  vector<ll> v;
  v.push_back(4*q);
  v.push_back(2*h);
  v.push_back(s);
  auto min_val = *min_element(all(v));
  cin >> n;
  ll out = 0LL;
  if(n>=2){
    ll val = min(2*min_val, d);
    out += val*(n/2);
    out += min_val*(n%2);
  } else {
    out += min_val;
  }
  cout << out << endl;
  return 0;
}
