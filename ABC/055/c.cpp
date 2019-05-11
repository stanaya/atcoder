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
long long i,j,k,n,m;
string s;
long long mod=1000000007;

int main() {
  cin >> n>>m;
  long long out =0;
  if (m>=2) {
    out += min(n,m/2);
    m -= 2 * min(n,m/2);
    out += m/4;
  }
  cout << out << endl;
  return 0;
}
