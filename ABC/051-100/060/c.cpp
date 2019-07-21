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
  long t;cin>>n>>t;
  vector<long> vt(n), vdt(n);
  for(i=0;i<n;++i) cin>>vt[i];
  long tot=0;
  for(j=0;j<n-1;++j) tot += min(t,vt[j+1]-vt[j]);
  tot += t;
  cout << tot << endl;
  return 0;
}
