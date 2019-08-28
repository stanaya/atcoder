#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

ll gcd(ll a, ll b){
  if(b==0) return a;
  return gcd(b, a%b);
}

ll lcm(ll a, ll b){
  ll g = gcd(a,b);
  return a/g*b;
}

int main() {
  ll n,m;cin >> n>>m;
  string s,t;cin >> s>>t;
  ll l = lcm(n,m);
  ll ld = lcm(l/n,l/m);
  bool canExist =true;
  ll tmp = 0;
  while (tmp<=l) {
    int i = tmp/(l/n);
    int j = tmp/(l/m);
    auto sub_s = s.substr(i,1);
    auto sub_t = t.substr(j,1);
    if(sub_s != sub_t ) {
      canExist = false;
      break;
    }
    tmp += ld;
  }
  if(canExist){
    cout << l << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}
