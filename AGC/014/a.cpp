#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll a,b,c;cin>>a>>b>>c;
  if(a%2==0&&b%2==0&&c%2==0&&a==b&&b==c){
    cout << -1 << endl;
  } else {
    ll cnt = 0;
    while(a%2==0&&b%2==0&&c%2==0){
      ll ta = b/2 + c/2;
      ll tb = c/2 + a/2;
      ll tc = a/2 + b/2;
      a = ta;
      b = tb;
      c = tc;
      ++cnt;
    }
    cout << cnt << endl;
  }
  return 0;
}
