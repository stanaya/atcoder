#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin>>n;
  vector<tuple<ll,ll,ll>> vt;
  for(int i=0;i<n;++i){
    ll x,y,h;cin >>x>>y>>h;
    vt.push_back(make_tuple(x,y,h));
  }
  sort(all(vt), [](tuple<ll,ll,ll>& ta,tuple<ll,ll,ll>& tb){return get<2>(ta) > get<2>(tb);});
  bool found = false;
  ll xout, yout, hout;
  for(int i=0;i<=100;++i){
    for(int j=0;j<=100;++j){
      ll htmp =-1;
      bool isbreak = false;
      for(int k=0;k<n;++k){
        if(htmp<0) htmp = get<2>(vt[k]) + abs(get<0>(vt[k]) - i) + abs(get<1>(vt[k]) - j);
        ll tmp = max(htmp - abs(get<0>(vt[k]) - i) - abs(get<1>(vt[k]) - j), 0LL);
        if (tmp != get<2>(vt[k])) {
          isbreak = true;
          break;
        }
      }
      if(!isbreak) {
        found = true;
        xout = i;
        yout = j;
        hout = htmp;
        break;
      }
    }
    if(found) break;
  }
  cout << xout << " " << yout << " " << hout << endl;
  return 0;
}
