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
  vector<int> h(n);
  for(i=0;i<n;++i) cin>>h[i];
  bool nonzero=false;
  int cnt=0;
  while(count(h.begin(), h.end(), 0) < n){
    for (j =0;j< n;++j){
      if(h[j] > 0){
        nonzero=true;
        --h[j];
      } else {
        if (nonzero) {
          ++cnt;
          nonzero = false;
        }
      }
      if (j==n-1 && nonzero) {
        ++cnt;
        nonzero = false;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}
