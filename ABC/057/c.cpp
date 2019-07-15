#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int caldigit(ll num){
  int out =0;
  while(num>0){
    if(num>0) ++out;
    num /=10;
  }
  return out;
}

int main() {
  ll n;cin >> n;
  ll sqrtn = (ll)sqrt(n);
  ll a,b;
  for(ll i=sqrtn; i>0; --i){
    if(n%i==0){
      a=i;
      b=n/i;
      break;
    }
  }
  cout << max(caldigit(a),caldigit(b)) << endl;
  return 0;
}
