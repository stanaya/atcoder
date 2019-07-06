#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  string s; cin >> s;
  bool isrepeat = false;
  string prev = "";
  for (int i=0;i<4;++i){
    auto sub = s.substr(i,1);
    if(sub == prev){
      isrepeat = true;
      break;
    }
    prev = sub;
  }
  if(isrepeat){
    cout << "Bad" << endl;
  } else {
    cout << "Good" << endl;
  }
  return 0;
}
