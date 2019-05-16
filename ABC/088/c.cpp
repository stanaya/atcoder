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
  int c11,c12,c13,c21,c22,c23,c31,c32,c33;
  cin >>c11>>c12>>c13;
  cin >>c21>>c22>>c23;
  cin >>c31>>c32>>c33;
  int d1,e1,d2,e2,d3,e3;
  d1 = c12 + c21; e1= c11+c22;
  d2 = c23 + c32; e2= c22+c33;
  d3 = c31 + c13; e3= c11+c33;
  if(d1==e1 &&d2==e2 &&d3==e3) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
