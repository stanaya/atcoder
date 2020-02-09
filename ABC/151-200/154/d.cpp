#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  ll n,k;cin >> n >>k;
  vector<ll> v(n);
  repi(i,0,n) cin >> v[i];
  vector<ll> vsum(n-k+1);
  ll sum =0;
  for(ll j=0;j<k;++j)sum += v[j];
  vsum[0] = sum;
  for(ll l=1;l<n-k+1;++l){
  	vsum[l] = vsum[l-1] - v[l-1] + v[k-1+l];
  }
  sort(all(vsum));
  ll out = vsum[vsum.size()-1];
  cout << fixed << setprecision(10) << (double)(out+k)/2.0d<< endl;

  return 0;
}
