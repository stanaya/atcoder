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
string s;
LL mod=1000000007;

int main() {
  cin >> n>>m;
  if(abs(n-m)>1) {
    cout << 0 << endl;
  } else {
    LL np=1;
    for(i=1; i<n+1;++i){
      np *= i;
      np=np%mod;
    }
    LL mp=1;
    for(i=1; i<m+1;++i){
       mp *= i;
       mp=mp%mod;
    }
    LL out = (np*mp)%mod;
    if(n==m){
      out = (2*out)%mod;
    }
    cout << out << endl;
  }
  return 0;
}
