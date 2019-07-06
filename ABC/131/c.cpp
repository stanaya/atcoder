#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef unsigned long long ll;
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
  ll a,b,c,d; cin >> a >>b >> c >> d;
  ll divc = b/c - (a-1)/c;
  ll divd = b/d - (a-1)/d;
  ll alcm = lcm(c,d);
  ll divcd = b/alcm - (a-1)/alcm;
  cout  << (b-a+1) - divc - divd + divcd << endl;
  return 0;
}
