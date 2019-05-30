#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n; cin >>n;
  string s; cin >> s;
  std::vector<int> vnume(n), vnumw(n);
  int cnte=0;
  int cntw=0;
  for(int i =0; i<n;++i){
    vnumw[i] = cntw;
    vnume[n-1-i] = cnte;
    string sw = s.substr(i,1);
    string se = s.substr(n-1-i,1);
    if(sw =="W") ++ cntw;
    if(se =="E") ++ cnte;
  }
  int min_cnt = 2*s.size();
  for(int j=0;j<n;++j){
    min_cnt = min(min_cnt,vnume[j] + vnumw[j]);
  }
  cout << min_cnt << endl;
  return 0;
}
