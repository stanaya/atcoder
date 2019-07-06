#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n,k;cin >>n >> k;
  vector<ll> v(n);
  for(ll i=0; i< n;++i){
    cin >> v[i];
  }
  ll cnt=0;
  ll len = 0;
  ll sum =0;
  for (ll i=0; i< n;++i){
    ll end=i+len;
    while(sum<k && end<n){
      sum += v[end];
      end +=1;
    }
    if(sum >=k){
      cnt += n - end + 1;
    }
    sum = sum - v[i];
    len = max((ll)0, end - i - 1);
  }
  cout << cnt << endl;
  return 0;
}
