#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n,d;cin>>n>>d;
  vector<vector<int>> x;
  for(int i=0;i<n;++i){
    vector<int> t(d);
    for(int j=0;j<d;++j) cin >> t[j];
    x.push_back(t);
  }
  int cnt=0;
  for(int i=0;i<n;++i){
    for(int j=i+1;j<n;++j){
      int tmp =0;
      for(int k=0;k<d;++k){
        tmp += (x[i][k] - x[j][k])*(x[i][k] - x[j][k]);
      }
      int t_sqrt = (int)sqrt(tmp);
      if(tmp==t_sqrt*t_sqrt) ++cnt;
    }
  }
  cout << cnt << endl;
  return 0;
}
