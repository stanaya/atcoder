#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  int n;cin >> n;
  int cnt = 0;
  int target = 1;
  for(int i=0;i<n;++i){
    int t;cin>>t;
    if(t==target){
      ++cnt;
      ++target;
    }
  }
  if(cnt>0){
    cout << n-cnt << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}
