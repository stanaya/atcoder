#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
string s;

int main() {
  int n, m;cin >>n>>m;
  vector<vector<int>> v(m);
  for (int i=0;i<m;++i){
    int k; cin>>k;
    vector<int> vt(k);
    for(int j=0;j<k;++j){
      cin >> vt[j];
    }
    v[i] = vt;
  }
  vector<int> vp(m);
  for(int l=0;l<m;++l){
    cin >> vp[l];
  }
  int cnt = 0;
  for (int bit=0;bit < (1<<n); ++bit) {
    int nlight=0;
    for (int i1=0;i1<m;++i1){
      int nswitch = 0;
      for (auto itr=v[i1].begin();itr!=v[i1].end();++itr){
        if (bit & (1<<*itr-1)) ++nswitch;
      }
      if(nswitch%2==vp[i1]) ++nlight;
    }
    if (nlight==m) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}
