#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll h,w; cin >> h >> w;
  if(h%3==0 || w%3==0){
    cout << 0 << endl;
  } else {
    ll min_val = mod;
    for(ll i=1;i<h;++i){
      vector<ll> v1,v2;
      ll s1a = i*w;
      ll s1b = (h-i)*(w/2);
      ll s1c = h*w - s1a - s1b;
      v1.push_back(s1a);
      v1.push_back(s1b);
      v1.push_back(s1c);
      sort(all(v1));
      min_val = min(min_val, v1[2]-v1[0]);
      if(i!=h-1){
        ll s2a = i*w;
        ll s2b = ((h-i)/2)*w;
        ll s2c = h*w - s2a - s2b;
        v2.push_back(s2a);
        v2.push_back(s2b);
        v2.push_back(s2c);
        sort(all(v2));
        min_val = min(min_val, v2[2]-v2[0]);
      }
    }
    for(ll i=1;i<w;++i){
      vector<ll> v1,v2;
      ll s1a = h*i;
      ll s1b = h/2*(w-i);
      ll s1c = h*w - s1a - s1b;
      v1.push_back(s1a);
      v1.push_back(s1b);
      v1.push_back(s1c);
      sort(all(v1));
      min_val = min(min_val, v1[2]-v1[0]);
      if(i!=w-1){
        ll s2a = h*i;
        ll s2b = h*((w-i)/2);
        ll s2c = h*w - s2a - s2b;
        v2.push_back(s2a);
        v2.push_back(s2b);
        v2.push_back(s2c);
        sort(all(v2));
        min_val = min(min_val, v2[2]-v2[0]);
      }
    }
    cout << min_val << endl;
  }
  return 0;
}
