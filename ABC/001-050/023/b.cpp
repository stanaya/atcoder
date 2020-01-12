#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n;cin>>n;
  string s;cin>>s;
  if(n%2==0){
    cout << -1 << endl;
    return 0;
  }
  int l = (n-1)/2;
  bool valid = true;
  for(int j=l;j>0;--j){
    auto le = s.substr(0,1);
    auto re = s.substr(s.size()-1,1);
    if(j%3==0){
      if(le!="b" || re!="b") valid = false;
    } else if(j%3==1) {
      if(le!="a" || re!="c") valid = false;
    } else if(j%3==2) {
      if(le!="c" || re!="a") valid = false;
    }
    if(!valid) break;
    s = s.substr(1,s.size()-2);
  }
  if(valid){
    if(s=="b") {
      cout << l << endl;
    } else {
      cout << -1 << endl;
    }
  } else {
    cout << -1 << endl;
  }
  return 0;
}
