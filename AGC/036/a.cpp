#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll s;cin >> s;
  ll x2,y2,x3,y3;
  ll sqrt_s = (ll)sqrt(s);
  while(sqrt_s*sqrt_s < s){
    ++sqrt_s;
  }
  x3 = sqrt_s;
  y2 = sqrt_s;
  ll rest = sqrt_s*sqrt_s-s;
  x2 =1;
  y3=rest;
  cout << "0 0 "<< x2 << " " << y2 << " "<< x3 << " " << y3 << endl;
  return 0;
}
