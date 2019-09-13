#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n,m;cin >>n >> m;
  vector<string> a(n),b(m);
  repi(i,0,n) cin >> a[i];
  repi(i,0,m) cin >> b[i];
  bool found = false;
  for(int i=0;i<n-m+1;++i){
    for(int j=0;j<n-m+1;++j){
      bool tmp = true;
      for(int k=0;k<m ;++k){
        string row = a[j+k].substr(i,m);
        if(row != b[k]){
          tmp=false;
          break;
        }
      }
      if(tmp) {
        found = true;
        break;
      }
    }
    if(found) break;
  }
  if(found){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
