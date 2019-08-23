#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin >> n;
  string s,t; cin >> s >> t ;
  if (s==t){
    cout << s.size() << endl;
  } else {
    string out;
    bool  found = false;
    for(int i=0;i<n;++i){
      auto subs = s.substr(n-1-i,i+1);
      auto subt = t.substr(0,i+1);
      if(subs==subt){
        out = s.substr(0,n-i-1) + t;
        found = true;
        break;
      }
    }
    if(!found) out = s+t;
    cout << out.size() << endl;
  }
  return 0;
}
