#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  int n,m; cin >>n >>m;
  vector<int> used(n,-1);
  bool valid = true;
  for(int i=0;i<m;++i){
    int s,c;cin >> s>>c;
    if(used[s-1]>=0&&used[s-1]!=c){
      valid = false;
      break;
    }
    if(s==1&&c==0&&n>1){
      valid = false;
      break;
    }
    used[s-1] = c;
  }
  int out = -1;
  if(valid){
    out = 0;
    for(int i=0;i<n;++i){
      out *=10;
      int c = used[i];
      if(c<0){
        c = 0;
        if(i==0&&n>1) c=1;
      }
      out += c;
    }
  }
cout << out << endl;
  return 0;
}
