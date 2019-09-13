#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n,m,k;cin >> n >> m >> k;
  if(k%n==0 || k%m==0){
    cout << "Yes" << endl;
    return 0;
  }
  for(int i=0;i<=n;++i){
    for(int j=0;j<=m;++j){
      int cnt = i*m + j*n - 2*i*j;
      if(cnt == k){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
