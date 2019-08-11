#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin>>n;
  map<string,ll> mp;
  for(int i=0;i<n;++i){
    string s;
    cin >> s;
    std::vector<string> tmp;
    for(int j=0;j<10; ++j){
      tmp.push_back(s.substr(j,1));
    }
    sort(all(tmp));
    string out ="";
    for(int j=0;j<10; ++j){
      out += tmp[j];
    }
    if(mp.find(out) != mp.end()){
      mp[out] += 1LL;
    } else {
      mp[out] = 1LL;
    }
  }
  ll cnt=0;
  for(auto itr = mp.begin();itr != mp.end();++itr){
    if(itr->second == 1) continue;
    cnt += (itr->second)*(itr->second - 1LL)/2LL;
  }
  cout << cnt << endl;
  return 0;
}
