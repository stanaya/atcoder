#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
string s;

int main() {
  string x; cin >> x;
  cin >> s;
  string out ="";
  for(int i=0;i<s.size();++i){
    string t = s.substr(i,1);
    if(t!=x) out +=t;
  }
  cout << out << endl;
  return 0;
}
