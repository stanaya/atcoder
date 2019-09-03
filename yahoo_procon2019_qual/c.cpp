#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  ll k,a,b;cin >> k>>a>>b;
  ll out0 = k+1;
  ll
  if(k>a+1LL&&a+2LL<b){
    k -= a-1LL;
    --out;
    out += (k/2LL)*(b-a);
    out += k%2LL;
  }
  cout << out << endl;
  return 0;
}
