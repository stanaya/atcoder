#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  int n;cin>>n;
  vector<int> v(n),p(n),q(n);
  for(int i=0;i<n;++i) v[i] = i+1;
  for(int i=0;i<n;++i) cin>>p[i];
  for(int i=0;i<n;++i) cin>>q[i];
  int idp =-1,idq=-1,id=0;
  do {
    bool isp = true,isq = true;
    for(int i=0;i<n;++i){
      if(v[i]!=p[i]) isp = false;
      if(v[i]!=q[i]) isq = false;
    }
    if(isp) idp = id;
    if(isq) idq = id;
    if(idq>-1&&idp>-1)break;
    ++id;
  } while (next_permutation(v.begin(), v.end()));
  cout << abs(idp-idq) << endl;
  return 0;
}
