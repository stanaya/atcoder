#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;

int main() {
  int w,h,n;cin >> w >> h>>n;
  vector<tuple<int, int, int>> vt;
  for(int i=0;i<n;++i){
  	int x,y,a;cin >> x >> y>>a;
    vt.push_back(make_tuple(x,y,a));
  }
  int area = h*w;
  int x1 =0;int y1 =0;
  int x2 =w;int y2 =0;
  int x3 =w;int y3 =h;
  int x4 =0;int y4 =h;
  for(int i=0;i<n;++i){
  	int x = get<0>(vt[i]);
    int y = get<1>(vt[i]);
    int a = get<2>(vt[i]);
    if(a == 1){
      	x1 =max(x1,x);
      	x4 =max(x4,x);
    } else if(a == 2){
      	x2 =min(x2,x);
      	x3 =min(x3,x);
    } else if(a == 3){
      	y1 =max(y1,y);
      	y2 =max(y2,y);
    } else if(a == 4){
      	y3 =min(y3,y);
      	y4 =min(y4,y);
    }
  }
  if(x2 - x1>=0 && y3 - y2>=0){
    cout << (x2 - x1)*(y3 - y2) << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}
