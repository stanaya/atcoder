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
  cin >>n;
  int cnt=0;
  for(i=0;i<n;++i) {
    long a;cin>>a;
    while (a%2==0) {
      ++cnt;
      a=a/2;
    }
  }
  cout << cnt <<endl;
  return 0;
}
