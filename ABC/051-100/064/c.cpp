#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
string s;

int main() {
  int n; cin >> n;
  vector<int> v(9,0);
  for (int i=0;i<n;++i){
    int a;cin>>a;
    if(a<=399) {
      v[0] +=1;
    } else if(a>=400 && a<=799) {
      v[1] +=1;
    } else if(a>=800 && a<=1199) {
      v[2] +=1;
    } else if(a>=1200 && a<=1599) {
      v[3] +=1;
    } else if(a>=1600 && a<=1999) {
      v[4] +=1;
    } else if(a>=2000 && a<=2399) {
      v[5] +=1;
    }else if(a>=2400 && a<=2799) {
      v[6] +=1;
    } else if(a>=2800 && a<=3199) {
      v[7] +=1;
    } else {
      v[8] +=1;
    }
  }
  int cnt_clr = (int)count_if(v.begin(), v.end() -1,[](int a){return a>0;});
  cout << max(cnt_clr,1) << " " << cnt_clr+v[8] << endl;
  return 0;
}
