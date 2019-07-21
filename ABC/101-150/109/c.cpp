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

long gcd(long a, long b) {
  long r = b%a;
  long d;
  while(r!=0)
  {
    b = a;
    a = r;
    r = b%a;
  }
  if(r==0) d = a;
  return d;
}

int main() {
  long long x;cin >>n >> x;
  vector<long long> v(n);
  for(i=0;i<n; ++i) {
    long long t;
    cin >> t;
    v[i] = abs(t-x);
  }
  long ans = v[0];
  for (i=0;i<n-1;++i) {
    ans = gcd(ans,v[i+1]);
  }
  cout << ans << endl;
  return 0;
}
