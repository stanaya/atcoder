#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

ll digit_cnt(ll num){
  ll cnum = 0;
  while(num>0){
    ++cnum;
    num /= 10;
  }
  return cnum;
}

int main() {
  ll a,b,x;cin >>a>>b>>x;
  ll out = 0LL;
  ll nd = 1LL;
  while(true){
    ll tmp = (x - b*nd)/a;
    if(tmp>=0&&digit_cnt(tmp)>=nd){
      ll tmp2 = 0;
      for(int i=0;i<nd;++i){
        tmp2 *=10LL;
        tmp2 += 9LL;
      }
      out = min(tmp2,tmp);
      ++nd;
    } else {
      break;
    }
  }
  cout << min(out,1000000000LL) << endl;
  return 0;
}
