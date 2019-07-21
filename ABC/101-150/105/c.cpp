#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n; cin >> n;
  if(n==0){
    cout << 0 << endl;
    return 0;
  }
  vector<ll> vout;
  ll i=1;
  while(abs(n)>0){
    ll r = abs(n)%2;
    vout.push_back(r);
    n -= r;
    n/=-2;
  }
  string out = "";
  for(auto ritr=vout.rbegin();ritr != vout.rend();++ritr) out += to_string(*ritr);
  cout << out << endl;
  return 0;
}
