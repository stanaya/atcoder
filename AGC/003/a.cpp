#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  string s;cin>> s;
  int cnt_n = 0;
  int cnt_s = 0;
  int cnt_e = 0;
  int cnt_w = 0;
  for(int i=0;i<s.size();++i){
    string sub = s.substr(i,1);
    if(sub=="N"){
      ++cnt_n;
    } else if(sub=="S"){
      ++cnt_s;
    } else if (sub=="E"){
      ++cnt_e;
    } else if(sub=="W"){
      ++cnt_w;
    }
  }
  bool valid = false;
  if((cnt_n ==0 && cnt_s ==0) ||(cnt_n !=0 && cnt_s !=0)) {
    if((cnt_w ==0 && cnt_e ==0) ||(cnt_w !=0 && cnt_e !=0)){
      valid = true;
    }
  }
  if(valid){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
