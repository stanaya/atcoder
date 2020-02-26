#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  int n;cin>>n;
  vector<int> v(n);
  int x=0;
  for(int i=0;i<n;++i){
    int t;cin >> t;
    x+=t;
    v[i] = t;
  }
  int p1=x/n,p2=x/n+1;
  int out1= 0,out2= 0;
  for(int i=0;i<n;++i){
    out1+=(v[i]-p1)*(v[i]-p1);
    out2+=(v[i]-p2)*(v[i]-p2);
  }
  cout << min(out1,out2) << endl;
  return 0;
}
