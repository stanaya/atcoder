#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;
typedef long long LL;
LL i,j,k,n,m;
LL mod=1000000007;
string s;

int main() {
  cin >> n >> k;
  long double prob =0.0;
  long double dn = (long double)n;
  for(i=1; i < n+1;++i) {
    long double tmp = (long double)i;
    int exp = 0;
    while(tmp<(long double)k) {
      ++exp;
      tmp = tmp * 2.0;
    }
    prob += pow(0.5, (long double)exp)/dn;
  }
  cout << std::setprecision(11) << prob << endl;
  return 0;
}
