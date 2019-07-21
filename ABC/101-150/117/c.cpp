#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n,m;cin >> n>>m;
  vector<int> v(m);
  for(int i=0;i<m;++i){
    cin >> v[i];
  }
  sort(all(v));
  if(n>=m) {
    cout << 0 << endl;
    return 0;
  }
  vector<tuple<int, int, int>> vt;
  for(int j=1;j<m;++j){
    vt.push_back(make_tuple(v[j-1], v[j],v[j] - v[j-1]));
  }
  sort(all(vt), [](tuple<int, int, int>& a,tuple<int, int, int>& b){return get<2>(a) < get<2>(b);});
  vt.resize(vt.size() - n+1);
  int out = 0;
  for (int k=0;k<vt.size();++k) {
    out += get<2>(vt[k]);
  }
  cout << out << endl;
  return 0;
}
