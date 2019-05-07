#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
int i,j,k,n,m;
string s;

int main() {
  cin>>n;
  vector<int> m(n);
  for (i=0;i<n;++i) cin >> m[i];
  int t = 200;
  for (int bit=0;bit < (1<<n); ++bit) {
    int a =0;int b =0;
    for (i = 0; i < m.size(); ++i) {
      if (bit & (1<<i)) {
        a += m[i];
      } else {
        b += m[i];
      }
    }
    int tt=max(a,b);
    if (tt<t) t = tt;
  }
  cout << t << endl;
  return 0;
}
