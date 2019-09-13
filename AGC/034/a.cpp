#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n,a,b,c,d;cin >>n>>a>>b>>c>>d;
  string s;cin >> s;
  bool canplace_a = true;
  bool canplace_b = true;
  bool canplace_c = true;
  for(int i=a-1; i<c-2;++i){
    if(s.substr(i,2) == "##" ) canplace_a = false;
  }
  for(int i=b-1; i<d-2;++i){
    if(s.substr(i,2) == "##" ) canplace_b = false;
  }
  if(d<c){
    canplace_c = false;
    for(int i=b-2; i<d-1;++i){
      if(s.substr(i,3) == "..." ) canplace_c = true;
    }
  }
  if(canplace_a && canplace_b && canplace_c){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
