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
  int cnt =n;
  for(i=0;i<=n;i++) {
    int tmp=0;
    int t=i;
    while(t>0){
      tmp += t%6;
      t/=6;
    }
    t=n-i;
    while(t>0){
      tmp += t%9;
      t/=9;
    }
    if(cnt>tmp) cnt=tmp;
  }
  cout << cnt << endl;
  return 0;
}
