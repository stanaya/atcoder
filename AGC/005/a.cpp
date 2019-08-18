#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  string s;cin >>s;
  int n = s.size();
  int cnt_r = 0;
  int cnt_l = 0;
  for(int i=n/2;i<n;++i){
    auto sub_r = s.substr(i,1);
    if(sub_r =="S"){
      ++cnt_r;
    } else {
      if(cnt_r>0) --cnt_r;
    }
    auto sub_l = s.substr(n-1-i,1);
    if(sub_l =="T"){
      ++cnt_l;
    } else {
      if(cnt_l>0) --cnt_l;
    }
  }
  cout << 2*max(cnt_r,cnt_l) << endl;
  return 0;
}
