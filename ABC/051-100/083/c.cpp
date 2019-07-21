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
  long long x,y; cin >> x>> y;
  long long div = y/x;
  long long exp=0;
  while ((long long)pow(2,exp) <=div) {
    ++exp;
  }
  cout << exp;
  return 0;
}
