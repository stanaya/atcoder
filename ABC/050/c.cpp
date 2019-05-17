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

bool isValid(const int n, const map<int, int>& mp) {
  bool valid =true;
  if (n%2 == 0) {
    if(mp.size() == n/2 ) {
      k=1;
      for (auto const& ele: mp) {
        if (ele.second != 2 || ele.first != k ) valid = false;
        k += 2;
      }
    } else {
      valid = false;
    }
  } else {
    if(mp.size() == n/2 + 1 ) {
      k=0;
      for (auto const& ele: mp) {
      	if (k == 0) {
      		if (ele.second != 1 || ele.first != k ) valid = false;
      	} else {
      		if (ele.second != 2 || ele.first != k ) valid = false;
      	}
        k += 2;
      }
    } else {
      valid = false;
    }
  }
  return valid;
}

int main() {
  cin >> n;
  map<int, int> mp;
  for (i=0;i<n;++i) {
    int t; cin >> t;
    if(mp.find(t) != mp.end()) {
      mp[t] +=1;
    } else {
      mp[t] =1;
    }
  }
  int cnt = 0;
  if (isValid(n,mp)) {
    int tmp =1;
    for (j=1;j<=n/2;++j) {
      tmp = tmp*2%mod;
    }
    cnt = tmp;
  }
  cout << cnt << endl;
  return 0;
}
