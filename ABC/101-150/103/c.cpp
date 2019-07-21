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
  int out=0;
  for(i=0;i<n;++i) {
    int t;cin>>t;
    out += t-1;
  }
  cout << out << endl;
  return 0;
}
