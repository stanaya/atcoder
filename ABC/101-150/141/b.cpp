#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  string s;cin >> s;
  bool valid = true;
  int pos = 1;
  for(int i=0;i<s.size();++i){
    string sub = s.substr(i,1);
    string check = "L";
    if(pos%2 == 0) check = "R";
    if(sub == check) {
      valid = false;
      break;
    }
    ++pos;
  }
  if(valid){
    cout << "Yes";
  } else {
    cout << "No";
  }
  return 0;
}
