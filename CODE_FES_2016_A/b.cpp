#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n;cin >> n;
  vector<int> a(n,-1);
  int cnt = 0;
  for(int i=0;i<n;++i){
    int t; cin >>t;
    a[i] = t-1;
    if(a[t-1] == i){
      ++cnt;
    }
  }
  cout << cnt << endl;
  return 0;
}
