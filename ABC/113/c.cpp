#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
int i,n,m;

int main() {
  cin >> n >> m;
  vector<int> p(m),y(m);
  vector<vector<ll>> v(n);
  for (i=0;i<m;++i){
    cin >> p[i] >> y[i];
    v[--p[i]].push_back(y[i]);
  }
  for (i=0;i<n;++i){
    sort(all(v[i]));
  }
  for (i=0;i<m;++i){
    ostringstream sout,sout2;
    sout << std::setfill('0') << std::setw(6) << p[i] + 1;
    auto id = lower_bound(all(v[p[i]]),y[i]) - v[p[i]].begin();
    sout2 << std::setfill('0') << std::setw(6) << id + 1;
    string s = sout.str() + sout2.str();
    cout << s << endl;
  }
  return 0;
}
