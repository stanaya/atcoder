#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

ll gcd(ll a, ll b){
  if(b==0) return a;
  return gcd(b, a%b);
}

int main() {
  int n;cin >> n;
  vector<ll> a(n+1);
  a[0] = 0;
  for(int i=0;i<n;++i) cin >> a[i+1];
  vector<ll> l(n+2),r(n+2),m(n);
  l[0] = 0;
  r[n+1] = 0;
  for(int j=0;j<n+1;++j){
    l[j+1] = gcd(l[j],a[j]);
    r[n-j] = gcd(r[n-j+1],a[n-j]);
  }
  for(int j=1;j<n+1;++j){
    m[j-1] = gcd(l[j], r[j+1]);
  }
  auto max_itr = max_element(all(m));
  cout << *max_itr << endl;
  return 0;
}
