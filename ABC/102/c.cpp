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
  cin>>n;
  vector<long> a(n);
  for(i=0;i<n;++i) {
    cin>>a[i];
    a[i] -= i + 1;
  }
  sort(a.begin(),a.end());
  long b = a[n/2];
  long out =0;
  for(i=0;i<n;++i)out += abs(a[i] - b);
  cout << out << endl;
  return 0;
}
