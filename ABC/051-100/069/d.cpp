#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int h,w,n;cin>>h>>w;
  cin >> n;
  vector<int> a(n);
  repi(i,0,n) cin >> a[i];
  int out[h][w];
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      out[i][j] = 0;
    }
  }
  int cnt = 0;
  int clr_id = 0;
  int paint_h = 0;
  int paint_w = 0;
  repi(i,0,n){
    int cnt_clr = a[i];
    for(int j=0;j<cnt_clr;++j){
      out[paint_h][paint_w] = i+1;
      if(paint_w+1<w)if(out[paint_h][paint_w+1] == 0){++paint_w;continue;}
      if(paint_w-1>=0)if(out[paint_h][paint_w-1] == 0){--paint_w;continue;}
      ++paint_h;
    }
  }
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      cout << out[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
