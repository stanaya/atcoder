#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
string s;

int main() {
  int n;
  cin >> n;
  map<int, int> mp;
  for (int i=0;i<n;++i) {
    int a; cin>>a;
    if (mp.find(a)==mp.end()){
      mp[a] =1;
    } else {
      mp[a] +=1;
    }
  }
  vector<pair<int, int>> v;
  for (auto const& ele: mp) {
    v.push_back(make_pair(ele.first,ele.second));
  }
  int cnt=0;
  for (int j=0;j<v.size();++j) {
    if(v[j].first>v[j].second){
      cnt +=v[j].second;
    } else{
      cnt += v[j].second - v[j].first;
    }
  }
  cout << cnt << endl;
  return 0;
}
