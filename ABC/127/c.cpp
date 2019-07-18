#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n,m;cin>>n>>m;
  int lmax=1;
  int rmin=n;
  for(int i=0;i<m;++i){
    int l,r;cin>>l>>r;
    lmax= max(lmax,l);
    rmin= min(rmin,r);
  }
  cout << max(rmin-lmax+1, 0) << endl;
  return 0;
}
