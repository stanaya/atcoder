#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll no;cin >> no;
  ll n,h,w;
  for(ll in = 1; in< 3501;++in){
    bool found = false;
    for(ll jh = 1; jh< 3501;++jh){
      ll tmpn = no*in*jh;
      ll tmpd = 4*in*jh - no*in - no*jh;
      if(tmpd>0) {
        if(tmpn%tmpd == 0 && tmpn/tmpd > 0) {
          found = true;
          n = in;
          h = jh;
          w = tmpn/tmpd;
          break;
        }
      }
    }
    if(found) break;
  }
  cout << n << " " << h << " " << w << endl;
  return 0;
}
