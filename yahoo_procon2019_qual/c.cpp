#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  ll k,a,b;cin >> k>>a>>b;
  ll out0 = k+1;
  ll out = 1;
  if(k>=a+1LL&&a+2LL<=b){
    k -= a-1LL;
    out += a-1LL;
    out += (k/2LL)*(b-a);
    k -= 2LL * (k/2LL);
    out += k;
  }
  cout << max(out,out0) << endl;
  return 0;
}
