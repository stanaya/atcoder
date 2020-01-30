#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n,m;cin >>n>>m;
  vector<int> v(n,0);
  vector<bool> trying(n,true);
  int cnt_pen =0;
  int cnt_ac = 0;
  for(int i=0; i<m;++i){
    int p;
    string s;
    cin >>p>>s;
    if(s=="WA"){
      ++v[p-1];
    } else {
      if(trying[p-1]){
        cnt_pen += v[p-1];
        ++cnt_ac;
        trying[p-1]=false;
      }
    }
  }
  cout << cnt_ac << " "<<cnt_pen<<endl;
  return 0;
}
