#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  int n;cin>>n;
  map<string,int> mp;
  for(int i=0;i<n;++i){
    string s;cin>>s;
    if (mp.find(s)==mp.end()){
      mp[s] =1;
    } else {
      mp[s] +=1;
    }
  }
  vector<pair<string, int>> v;
  for (auto const& ele: mp) v.push_back(make_pair(ele.first,ele.second));
  sort(all(v),[](pair<string, int>& a,pair<string, int>& b){return a.second>b.second;});
  int cnt = v[0].second;
  vector<string> out;
  for (auto const& ele: v) {
    if(ele.second==cnt){
      out.push_back(ele.first);
    } else {
      break;
    }
  }
  sort(all(out));
  for (auto const& ele: out) cout << ele <<endl;
  return 0;
}
