#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  string s;cin>>s;
  auto ca = count(all(s),'a');
  auto cb = count(all(s),'b');
  auto cc = count(all(s),'c');
  if(abs(ca-cb)>=2||abs(ca-cc)>=2||abs(cc-cb)>=2){
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
  return 0;
}
