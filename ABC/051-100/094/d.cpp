#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

vector<pair<ll, ll>> burger;

int main() {
  int n;cin >>n;
  vector<int> a(n);
  for(int i=0;i<n;++i)cin >> a[i];
  sort(all(a));
  int id_h = lower_bound(all(a), a[n-1]/2) - a.begin();
  int a_h = abs(a[n-1]/2 - a[id_h]);
  int a_h_m = abs(a[n-1]/2 - a[id_h-1]);
  if(a_h<=a_h_m && id_h != n-1 ){
    cout <<  a[n-1] << " " <<  a[id_h] << endl;
  } else {
    cout <<  a[n-1] << " " <<  a[id_h-1] << endl;
  }
  return 0;
}
