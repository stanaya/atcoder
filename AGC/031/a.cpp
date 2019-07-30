#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin >>n;
  string s;cin >>s;
  map<string, ll> mp;
  for(int i=0;i<n;++i){
    string sub = s.substr(i,1);
    if(mp.find(sub) == mp.end()){
      mp[sub] =1;
    } else {
      mp[sub] += 1;
    }
  }
  ll ans = 1;
  for(auto itr=mp.begin();itr!=mp.end();++itr){
    ans *= (itr->second + 1);
    ans %= mod;
  }
  cout << (ans - 1 + mod)%mod << endl;
  return 0;
}
