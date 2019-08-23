#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n; cin >> n;
  vector<double> v(n);
  for(int i=0; i< n;++i) cin >> v[i];
  sort(all(v));
  double out = (v[1] + v[0])/2.0d;
  for(int i=2;i<n;++i){
    out = (out + v[i])/2.0d;
  }
  cout << setprecision(12) << out << endl;
  return 0;
}
