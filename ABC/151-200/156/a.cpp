#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  int n,r;cin>>n>>r;
  if(n>=10){
    cout << r << endl;
  } else {
    cout << r+100*(10-n) << endl;
  }
  return 0;
}
