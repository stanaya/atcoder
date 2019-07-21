#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <cctype>
using namespace std;
typedef long long LL;
LL i,j,k,n,m;
LL mod=1000000007;
string s;

int main() {
  cin >> s;
  int x=stoi(s.c_str());
  int ia = x/100;
  int ib = x%100;
  if(ia <=12 && ia >0) {
    if(ib <=12 && ib >0){
      cout << "AMBIGUOUS" << endl;
    } else {
      cout << "MMYY" << endl;
    }
  } else {
    if(ib <=12 && ib >0) {
      cout << "YYMM" << endl;
    } else {
      cout << "NA" << endl;
    }
  }
  return 0;
}
