#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;

int main() {
  ll x; cin >>x;
  ll out = x/11LL;
  ll res = x%11LL;
  out *= 2LL;
  if (res<=6LL && res>0LL){
    out += 1LL;
  } else if(res>6LL) {
    out += 2LL;
  }
  cout << out << endl;
  return 0;
}
