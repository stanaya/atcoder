#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin >> n;
  vector<ll> va(n),vb(n),vc(n);
  for (int i=0;i<n;++i)cin>>va[i];
  for (int i=0;i<n;++i)cin>>vb[i];
  for (int i=0;i<n;++i)cin>>vc[i];

  sort(va.begin(),va.end());
  sort(vb.begin(),vb.end());
  sort(vc.begin(),vc.end());
  ll cnt =0;
  for(int i=0;i<vb.size();++i) {
    ll a = lower_bound(va.begin(),va.end(),vb[i])-va.begin();
    ll c = upper_bound(vc.begin(),vc.end(),vb[i])-vc.begin();
    cnt += a*(n-c);
  }
  cout << cnt << endl;
  return 0;
}
