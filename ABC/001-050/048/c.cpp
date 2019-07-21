#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n,x;cin >> n >> x;
  vector<ll> v(n);
  for (int i=0;i<n;++i){
    cin >> v[i];
  }
  ll out =0;
  for (int i=0;i<n-1;++i){
    if(v[i]+v[i+1]>x){
      out += min(v[i]+v[i+1]-x, v[i+1]);
      v[i+1] -= min(v[i]+v[i+1]-x, v[i+1]);
    }
    if(v[i]+v[i+1]>x){
      out += min(v[i]+v[i+1]-x, v[i]);
      v[i] -= min(v[i]+v[i+1]-x, v[i]);
    }
  }
  cout << out << endl;
  return 0;
}
