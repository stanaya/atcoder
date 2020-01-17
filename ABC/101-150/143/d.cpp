#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n;cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;++i)cin >>v[i];
  sort(all(v));
  int cnt = 0;
  for(int j=0;j<n-2;++j){
    for(int k=j+1;k<n-1;++k){
      int a = v[n-1-j];
      int b = v[n-1-k];
      auto iter = upper_bound(all(v), a-b);
      auto dist = distance(v.begin(), iter);
      cnt += max(0, (int)(n-1-k - dist));
    }
  }
  cout << cnt << endl;
  return 0;
}
