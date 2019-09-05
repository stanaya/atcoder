#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n;cin >> n;
  map<ll,int> mp;
  repi(i,0,n){
    ll d;cin >> d;
    if(mp.find(d) == mp.end()){
      mp[d] = 1;
    } else {
      mp[d] += 1;
    }
  }
  int m; cin >> m;
  bool possible = true;
  repi(i,0,m){
    ll t;cin >> t;
    if(mp.find(t) == mp.end()){
      possible = false;
      break;
    } else {
      if(mp[t] > 0){
        mp[t] -= 1;
      } else {
        possible = false;
        break;
      }
    }
  }

  if(possible){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
