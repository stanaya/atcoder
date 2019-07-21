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
  cin >>n;
  map<LL, LL> mp;
  for(i=0;i<n;++i) {
    LL t;cin >> t;
    if(mp.find(t) != mp.end()) {
      mp.at(t) = mp.at(t) + 1;
    } else {
      mp.insert(make_pair(t,1));
    }
  }
  int cnt=0;
  for(auto itr=mp.begin();itr !=mp.end();++itr){
    if((*itr).second%2 != 0) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}
