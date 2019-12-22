#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int sx,sy,tx,ty;cin >>sx>>sy>>tx>>ty;
  string s="";
  for(int i=0;i<ty-sy;++i) s+="U";
  for(int i=0;i<tx-sx;++i) s+="R";
  for(int i=0;i<ty-sy;++i) s+="D";
  for(int i=0;i<tx-sx+1;++i) s+="L";
  for(int i=0;i<ty-sy+1;++i) s+="U";
  for(int i=0;i<tx-sx+1;++i) s+="R";
  s+="DR";
  for(int i=0;i<ty-sy+1;++i) s+="D";
  for(int i=0;i<tx-sx+1;++i) s+="L";
  s+="U";
  cout << s << endl;
  return 0;
}
