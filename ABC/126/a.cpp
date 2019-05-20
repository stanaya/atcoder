#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <ctype.h>
using namespace std;
typedef long long LL;
LL i,j,k,n,m;
LL mod=1000000007;
string s;

int main() {
  cin >> n >> k;
  cin >> s;
  s[k-1] = tolower(s[k-1]);
  cout << s << endl;
  return 0;
}
