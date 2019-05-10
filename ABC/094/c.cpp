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
  vector<long> v(n), a;
  for(i=0;i<n;++i) cin >> v[i];
  a = v;
  sort(a.begin(),a.end());
  long med1 = a[n/2-1];
  long med2 = a[n/2];
  for(i=0;i<n;++i) {
    if(v[i]<=med1){
      cout << med2 << endl;
    } else {
      cout << med1 << endl;
    }
  }
  return 0;
}
