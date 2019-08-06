#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n,a,b; cin>> n>>a>>b;
  if(n==1){
    if(a==b){
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
    return 0;
  }
  ll min_v = (n-1) * a + b;
  ll max_v = (n-1) * b + a;
  cout << max(max_v - min_v + 1,0LL) << endl;
  return 0;
}
