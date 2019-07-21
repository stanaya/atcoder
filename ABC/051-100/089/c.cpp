#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin >> n;
  vector<ll> v(5,0);
  for(int i=0;i<n;++i){
    string s,sub;cin >> s;
    sub = s.substr(0,1);
    if (sub == "M") {
      v[0] +=1;
    } else if(sub == "A") {
      v[1] +=1;
    } else if(sub == "R") {
      v[2] +=1;
    } else if(sub == "C") {
      v[3] +=1;
    }else if(sub == "H") {
      v[4] +=1;
    }
  }
  vector<vector<int>> comb{{0,1,2},{0,1,3},{0,1,4},{0,2,3},{0,2,4},{0,3,4},{1,2,3},{1,2,4},{1,3,4},{2,3,4}};
  ll cnt =0;
  for(int j=0; j<comb.size();++j){
    cnt += v[comb[j][0]]*v[comb[j][1]]*v[comb[j][2]];
  }
  cout << cnt << endl;
  return 0;
}
