#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
using namespace std;
typedef long long LL;
LL i,j,k,n,m;
LL mod=1000000007;
string s;

int main() {
  cin >> n >> k;
  vector<LL> v(n);
  for (i=0;i<n;++i) {
    cin >> v[i];
  }
  sort(v.begin(),v.end());
  vector<LL> vd(n-k+1);
  for (i=0;i<n-k+1;++i) {
    vd[i] = v[i+k-1] - v[i];
  }
  auto min = *min_element(vd.begin(),vd.end());
  cout << min << endl;
  return 0;
}
