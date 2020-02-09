#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  ll h;cin>>h;
  ll cnt = 0;
  while(h>0){
    ++cnt;
    h/=2;
  }
  cout << (ll)pow(2.0d, (double)cnt) - 1LL << endl;
  return 0;
}
