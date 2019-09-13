#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  string s;cin >> s;
  string target = "keyence";
  bool isfound = false;
  for(int i=0;i<7; ++i){
    string sub = s.substr(i,s.size()-7);
    string tmp = s;
    tmp.replace(i,sub.size(), "");
    cout << tmp << endl;
    if(tmp == target){
      isfound = true;
      break;
    }
  }
  if(isfound){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
