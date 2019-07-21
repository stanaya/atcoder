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
  cin >> s;
  cin >> k;
  i=0;
  string sub = s.substr(i,1);
  while(sub=="1" && k!=1 && i<k - 1) {
    ++i;
    sub = s.substr(i,1);
  }
  cout << sub << endl;
  return 0;
}
