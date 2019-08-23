#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n; cin >> n;
  vector<double> v(n);
  for(int i=0;i<n;++i)cin >> v[i];
  double iout = 0.0d;
  for(int i=0;i<n;++i)iout += 1.0d/v[i];

  cout << setprecision(12) << 1.0d/iout << endl;

  return 0;
}
