#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll l,r;cin >> l>>r;
  ll len = r-l+1LL;
  ll l_mod = l%2019LL;
  ll r_mod = r%2019LL;
  ll min_val = 2020LL;
  for(int i=l_mod;i< l_mod + min(2019LL,len);++i){
    for(int j=i+1;j< l_mod + min(2019LL,len);++j){
      min_val = min(min_val, ((i%2019)*(j%2019))%2019LL);
    }
  }
  cout << min_val << endl;
  return 0;
}
