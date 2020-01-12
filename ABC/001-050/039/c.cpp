#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  string key = "WBWBWWBWBWBW";
  std::vector<string> v{"Do","Do","Re","Re","Mi","Fa","Fa","So","So","La","La","Si"};
  string s;cin >> s;
  int pos=0;
  for(int i=0;i<9;++i){
    auto tmp = s.substr(i,12);
    if(tmp==key) break;
    ++pos;
  }
  if(pos>0){
    cout << v[v.size()-pos] << endl;
  } else {
    cout << "Do" << endl;
  }
  return 0;
}
