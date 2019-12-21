#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  double txa,tya,txb,tyb,t,v;
  cin >> txa>>tya>>txb>>tyb>>t>>v;
  int n;cin >> n;
  bool cheet = false;
  for(int i=0;i<n;++i){
    double x,y;cin >>x>>y;
    double dist1 = sqrt((txa-x)*(txa-x) +(tya-y)*(tya-y));
    double dist2 = sqrt((txb-x)*(txb-x) +(tyb-y)*(tyb-y));
    if(dist1+dist2<=t*v){
      cheet = true;
      break;
    }
  }
  if(cheet){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
