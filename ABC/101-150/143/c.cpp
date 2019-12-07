#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n; cin >>n;
  string s;cin >> s;
  string prev="";
  int cnt = 1;
  for(int i=0; i<n;++i){
    auto sub = s.substr(i,1);
    if(sub!=prev && prev!="") ++cnt;
    prev = sub;
  }
  cout << cnt << endl;
  return 0;
}
