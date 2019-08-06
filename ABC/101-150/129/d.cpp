#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int h,w;cin>>h>>w;
  int cnt_w[h][w];
  int cnt_h[h][w];
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      cnt_w[i][j] = -10;
      cnt_h[i][j] = -10;
    }
  }
  std::vector<string> v(h);
  for(int i=0;i<h;++i){
    cin >> v[i];
  }
  for(int i=0;i<h;++i){
    vector<tuple<int,int,int>> vt;
    int cnt =0;
    int start =0;
    int end =0;
    bool found =false;
    for(int j=0;j<w;++j){
      auto sub = v[i].substr(j,1);
      if(sub == "."){
        ++cnt;
        if(found){
          end =j;
        } else {
          start = j;
          end = j;
          found = true;
        }
      } else {
        if(found){
          vt.push_back(make_tuple(start,end,cnt));
          cnt =0;
          found = false;
        }
      }
    }
    if(found)vt.push_back(make_tuple(start,end,cnt));
    for(int k=0;k<vt.size();++k){
      for(int l=get<0>(vt[k]);l<=get<1>(vt[k]);++l) cnt_w[i][l]=get<2>(vt[k]);
    }
  }

  for(int i=0;i<w;++i){
    vector<tuple<int,int,int>> vt;
    int cnt =0;
    int start =0;
    int end =0;
    bool found =false;
    for(int j=0;j<h;++j){
      auto sub = v[j].substr(i,1);
      if(sub == "."){
        ++cnt;
        if(found){
          end =j;
        } else {
          start = j;
          end = j;
          found = true;
        }
      } else {
        if(found){
          vt.push_back(make_tuple(start,end,cnt));
          cnt =0;
          found = false;
        }
      }
    }
    if(found)vt.push_back(make_tuple(start,end,cnt));
    for(int k=0;k<vt.size();++k){
      for(int l=get<0>(vt[k]);l<=get<1>(vt[k]);++l) cnt_h[l][i]=get<2>(vt[k]);
    }
  }
  int max_v = 0;
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      //cout << cnt_h[i][j] << endl;
      cout << cnt_w[i][j] << endl;
      max_v = max(max_v, cnt_h[i][j]+cnt_w[i][j]-1);
    }
  }
  cout << max_v << endl;
  return 0;
}
