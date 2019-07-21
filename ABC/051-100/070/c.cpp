#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
string s;

ll gcd(ll a, ll b){
  if(b==0) return a;
  return gcd(b, a%b);
}

ll lcm(ll a, ll b){
  ll g = gcd(a,b);
  return a/g*b;
}

int main() {
  int n; cin >> n;
  ll out=1;
  for (int i=0;i<n;++i){
    ll t;
    cin>>t;
    out = lcm(out,t);
  }
  cout << out << endl;
  return 0;
}
