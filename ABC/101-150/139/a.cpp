#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  string s,t;cin >>s>>t;
  int n =0;
  repi(i,0,3){
    string s1 = s.substr(i,1);
    string t1 = t.substr(i,1);
    if(s1==t1) ++n;
  }
  cout << n << endl;
  return 0;
}
