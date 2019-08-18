#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll a,b,c;cin >> a >> b >> c;
  if(a%2 == 0 || b%2 == 0 ||c%2 == 0){
    cout << 0 << endl;
  } else {
    vector<ll> v(3);
    v[0]= a;
    v[1]= b;
    v[2]= c;
    sort(all(v));
    cout << v[0] * v[1] << endl;
  }
  return 0;
}
