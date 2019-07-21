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
long i,j,k,n,m;
string s;

int main() {
  cin >>n;
  vector<long> a(n);
  for(i=0;i<n;++i) cin >> a[i];
  j=n-1;
  while (j>=0) {
    cout << a[j] << " ";
    j-=2;
  }
  j=0;
  if ((n-1)%2==0)j=1;
  while (j<n-1) {
    cout << a[j] << " ";
    j+=2;
  }
  return 0;
}
