#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
int i,j,k,n,m;
string s;

int getDigitNum(const int num, const int digit) {
  int pd = digit + 1;
  int dp1 = (int)pow(10, (float)pd);
  int dn0 = (int)pow(10, (float)digit);
  int t = num % dp1;
  return t/dn0;
}

bool isIn(int x, int start, int end) {
  // cal sum of num each digits
  int sum = 0;
  for (i=0; i<5;++i) sum += getDigitNum(x,i);
  bool out=false;
  if (sum >= start && sum <= end) out=true;
  return out;
}

int main() {
  int a,b; cin >> n >> a >> b;
  int sum=0;
  for (j=0; j < n+1;++j) {
    if (isIn(j, a, b)) sum +=j;
  }
  cout << sum << endl;
  return 0;
}
