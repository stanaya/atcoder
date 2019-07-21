#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
bool isok=false;
string s;
vector<string> v{ "dream", "dreamer", "erase", "eraser"};

int main() {
  cin >> s;
  bool isfound= true;
  while(isfound && s.size()>0){
    bool tmp = false;
    for (int i=0;i<4;++i){
      auto pos = s.rfind(v[i]);
      if(pos == s.size()-v[i].size()){
        tmp = true;
        s= s.substr(0,s.size()-v[i].size());
      }
    }
    isfound = tmp;
  }
  if(isfound) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
