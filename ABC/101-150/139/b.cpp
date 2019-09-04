#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int a,b;cin >>a >> b;
  int cnt =0;
  int t = 1;
  while(t<b){
    ++cnt;
    --t;
    t+=a;
  }
  cout << cnt << endl;
  return 0;
}
