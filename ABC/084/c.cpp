#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n; cin>> n;
  vector<vector<int>> v;
  for(int i=0; i<n-1;++i){
    vector<int> vt(3);
    cin >> vt[0]>>vt[1]>>vt[2];
    v.push_back(vt);
  }
  for(int j=0;j<n-1;++j){
    int s = v[j][0] + v[j][1];
    if(j<n-2){
      for(int k=j+1;k<n-1;++k){
        if (s<v[k][1]){
          s= v[k][1];
        } else {
          int t = s/v[k][2];
          if(s%v[k][2] !=0) ++t;
          s= t*v[k][2];
        }
        s+=v[k][0];
      }
    }
    cout << s << endl;
  }
  cout << 0 << endl;
  return 0;
}
