#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll a,k; cin >> a >> k;
  ll target = 2000000000000LL;
  ll cnt_day = 0LL;
  if(k==0LL){
    cout << target - a << endl;
    return 0;
  }
  while(a<target){
    a = a + 1LL + k*a;
    ++cnt_day;
  }
  cout << cnt_day << endl;
  return 0;
}
