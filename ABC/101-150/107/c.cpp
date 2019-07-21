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
int i,j,k,n,m;
string s;

int main() {
  cin >> n>>k;
  vector<int> v(n);
  vector<int> sum(n-k+1);
  for(i=0; i< n; ++i) cin >> v[i];
  for(i=0; i< n-k+1; ++i) {
    int r,l;
    r = abs(v[i]) + abs(v[i+k-1] - v[i]);
    l = abs(v[i+k-1]) + abs(v[i+k-1] - v[i]);
    sum[i] = min(r,l);
  }
  sort(sum.begin(),sum.end());
  cout << sum[0] << endl;
  return 0;
}
