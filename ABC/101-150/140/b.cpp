#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n;cin >> n;
  vector<int> a(n),b(n),c(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  for(int i=0; i<n; ++i) cin >> b[i];
  for(int i=0; i<n-1; ++i) cin >> c[i];
  int prev = -10;
  int satis = 0;
  for(int i=0; i<n; ++i){
    satis += b[a[i]-1];
    if(a[i] ==prev+1){
      satis += c[prev-1];
    }
    prev = a[i];
  }
  cout << satis << endl;
  return 0;
}
