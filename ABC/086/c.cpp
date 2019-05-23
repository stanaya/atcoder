#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
string s;

int main() {
  int n;cin >> n;
  vector<tuple<int, int, int>> vt;
  for(int i=0;i<n;++i){
    int t,x,y;cin >>t>>x>>y;
    vt.push_back(make_tuple(t,x,y));
  }
  int t0=0;
  int x0=0;
  int y0=0;
  string out = "Yes";
  for(int j=0;j<n;++j){
    int t1 = get<0>(vt[j]);
    int x1 = get<1>(vt[j]);
    int y1 = get<2>(vt[j]);
    int dt = t1 - t0;
    dt -= abs(x1-x0);
    dt -= abs(y1-y0);
    if(dt==0 || (dt%2==0 && dt>0)){
    } else {
      out = "No";
      break;
    }
    t0=t1;
    x0=x1;
    y0=y1;
  }
  cout << out << endl;
  return 0;
}
