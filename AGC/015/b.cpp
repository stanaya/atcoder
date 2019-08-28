#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  string s;cin >>s;
  ll cnt = 0;
  ll n = (ll)s.size();
  for(ll i=1; i<n-1;++i){
    auto sub = s.substr(i,1);
    if(sub == "U"){
      cnt += 2*i;
      cnt += n-i-1;
    } else {
      cnt += i;
      cnt += 2*(n-i-1);
    }
  }
  cnt += 2*(n-1);
  cout << cnt << endl;
  return 0;
}
