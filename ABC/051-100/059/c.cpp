#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin >>n;
  ll cnt_a=0;
  ll cnt_b=0;
  ll sum_a =0;
  ll sum_b =0;
  ll sign_a = 1;
  ll sign_b = -1;
  for(int i=0;i<n;++i){
    ll t;cin >> t;
    sum_a +=t;
    sum_b +=t;
    if (sum_a * sign_a <= 0){
      cnt_a += abs(sum_a) + 1;
      sum_a = sign_a;
    }
    if (sum_b * sign_b <= 0){
      cnt_b += abs(sum_b) + 1;
      sum_b = sign_b;
    }
    sign_a *=-1;
    sign_b *=-1;
  }
  cout << min(cnt_a,cnt_b) << endl;
  return 0;
}
