#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int h,w;cin>>h>>w;
  string grid[w][h];
  queue<pair<int,int>> q;
  int cnt_b = 0;
  for(int i=0;i<h;++i){
    string s;cin >> s;
    for(int j=0;j<w;++j){
      auto sub = s.substr(j,1);
      grid[j][i] = sub;
      if(sub=="#") {
        ++cnt_b;
        q.push(make_pair(j,i));
      }
    }
  }
  int out = 0;
  while (cnt_b< h*w) {
    vector<pair<int,int>> vp;
    while(!q.empty()){
      auto p = q.front();
      q.pop();
      int x = p.first;
      int y = p.second;
      if(x-1>=0){
        if(grid[x-1][y]=="."){
          grid[x-1][y] = "#";
          ++cnt_b;
          vp.push_back(make_pair(x-1,y));
        }
      }
      if(x+1<w){
        if(grid[x+1][y]=="."){
          ++cnt_b;
          grid[x+1][y] = "#";
          vp.push_back(make_pair(x+1,y));
        }
      }
      if(y-1>=0){
        if(grid[x][y-1]=="."){
          ++cnt_b;
          grid[x][y-1] = "#";
          vp.push_back(make_pair(x,y-1));
        }
      }
      if(y+1<h){
        if(grid[x][y+1]==".") {
          ++cnt_b;
          grid[x][y+1] = "#";
          vp.push_back(make_pair(x,y+1));
        }
      }
    }
    for(auto&& e: vp)q.push(e);
    ++out;
  }
  cout << out << endl;
  return 0;
}
