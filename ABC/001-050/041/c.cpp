#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin >> n;
  vector<pair<int,int>> v;
  for(int i=0;i< n;++i){
    int t;cin >>t;
    v.push_back(make_pair(i+1,t));
  }
  sort(all(v), [](pair<int, int>& a, pair<int, int>& b){return a.second> b.second;});
  for(int i=0;i< n;++i){
    cout << v[i].first << endl;
  }
  return 0;
}
