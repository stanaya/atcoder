#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  ll n;cin >> n;
  ll x = (ll)sqrt((double)n);
  ll out;
  while(x){
    if(n%x==0){
      out = x+ (n/x)-2LL;
      break;
    }
    --x;
  }
  cout << out << endl;
  return 0;
}
