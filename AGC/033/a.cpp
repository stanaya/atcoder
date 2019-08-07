#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int h,w;cin>>h>>w;
  string grid1[h][w];
  string grid2[h][w];
  int cnt_black = 0;
  for(int i=0;i<h;++i){
    string s;cin >> s;
    for(int j=0;j<w;++j){
      auto sub = s.substr(j,1);
      grid1[i][j] = sub;
      grid2[i][j] = sub;
      if(sub=="#") ++cnt_black;
    }
  }
  int out = 0;
  while (cnt_black< h*w) {
    for(int i=0;i<h;++i){
      for(int j=0;j<w;++j){
        bool found1 = false;
        bool found2 = false;
        bool found3 = false;
        bool found4 = false;
        if(i-1>=0)if(grid1[i-1][j]=="#") found1 = true;
        if(i+1<w)if(grid1[i+1][j]=="#") found2 = true;
        if(j-1>=0)if(grid1[i][j-1]=="#") found3 = true;
        if(j+1<h)if(grid1[i][j+1]=="#") found4 = true;
        if(found1 || found2 || found3 || found4) {
          if(grid2[i][j]=="."){
            grid2[i][j] = "#";
            ++cnt_black;
          }
        }
      }
    }
    for(int i=0;i<h;++i){
      for(int j=0;j<w;++j){
          grid1[i][j] = grid2[i][j];
      }
    }
    ++out;
  }
  cout << out << endl;
  return 0;
}
