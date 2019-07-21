#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  string sd,t;cin >> sd >> t;
  int id=0;
  bool storable =false;
  for(int i=0;i<sd.size()-t.size()+1;++i){
    bool t_storable =true;
    for (int j=0;j<t.size();++j){
      string tt = t.substr(j,1);
      string tsd = sd.substr(i+j,1);
      if(tsd != "?" && tsd != tt) t_storable =false;
    }
    if(t_storable) {
      storable = true;
      id = i;
    }
  }
  if(storable){
    string s;
    for(int i=0;i<sd.size();++i){
      if(i>=id && i<id+t.size()){
        string tt = t.substr(i-id,1);
        s+=tt;
      } else {
        string tsd = sd.substr(i,1);
        if (tsd == "?") {
          s+= "a";
        } else {
          s+= tsd;
        }
      }
    }
    cout << s << endl;
  } else {
    std::cout << "UNRESTORABLE" << '\n';
  }
  return 0;
}
