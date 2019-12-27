#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

ll gcd(ll a, ll b){
  if(b==0) return a;
  return gcd(b, a%b);
}

ll lcm(ll a, ll b){
  ll g = gcd(a,b);
  return a/g*b;
}

int main() {
  ll a,b;cin >>a>>b;
  cout << lcm(a,b) << endl;
  return 0;
}
