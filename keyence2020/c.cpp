#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  int n,k,s;cin>>n>>k>>s;
  vector<int> v(n,s);
  if(s==1000000000){
    for(int j=k;j<n;++j)v[j] = 1;
  } else {
    for(int j=k;j<n;++j)v[j] = s+1;
  }
  for(int i=0;i<n;++i) cout << v[i] << " ";
  return 0;
}
