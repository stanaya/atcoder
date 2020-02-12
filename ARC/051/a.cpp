#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  int x1,y1,x2,y2,x3,y3,r;
  cin>>x1>>y1>>r;
  cin>>x2>>y2>>x3>>y3;
  int d1 = (x2-x1)*(x2-x1) +(y2-y1)*(y2-y1);
  int d2 = (x2-x1)*(x2-x1) +(y3-y1)*(y3-y1);
  int d3 = (x3-x1)*(x3-x1) +(y2-y1)*(y2-y1);
  int d4 = (x3-x1)*(x3-x1) +(y3-y1)*(y3-y1);
  if(x1+r<=x3 &&x1-r>=x2 &&y1+r<=y3 &&y1-r>=y2){
    cout << "NO" << endl;
    cout << "YES" << endl;
  } else if(d1<=r*r&&d2<=r*r&&d3<=r*r&&d4<=r*r){
    cout << "YES" << endl;
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
    cout << "YES" << endl;
  }
  return 0;
}
