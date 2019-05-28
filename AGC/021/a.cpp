#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n;cin >>n;
  vector<ll> v;
  while(n>0){
    ll r = n%10;
    n/=10;
    v.push_back(r);
  }
  ll out=0;
  bool allnine =true;
  if(v.size()>1){
    for(int i=0;i<v.size();++i){
      if(i==v.size() -1){
        out += v[i] - 1;
        if (allnine)out += 1;
      } else {
        if(allnine && v[i] != 9) allnine =false;
        out += 9;
      }
    }
  } else {
    out += v[0];
  }
  cout << out << endl;
  return 0;
}
