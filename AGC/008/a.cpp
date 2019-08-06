#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll x,y; cin >>x>>y;
  ll out;
  if(x<y){
    out = min(y-x, abs(abs(y)-abs(x)) + 1);
  } else {
    x*=-1;
    out = 1;
    out += min(abs(y-x), abs(abs(y)-abs(x)) + 1);
  }
  cout << out << endl;
  return 0;
}
