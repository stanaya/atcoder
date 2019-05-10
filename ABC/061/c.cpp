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
long i,j,k,n,m;
string s;

int main() {
  cin >>n >>k;
  vector<pair<long,long>> v;
  for(i=0;i<n;++i) {
    int a,b;cin >>a >>b;
    v.push_back(make_pair(a,b));
  }
  sort(v.begin(),v.end(),[](pair<long,long>& a,pair<long,long>& b){return a.first < b.first;});
  long sum =0;
  for(i=0;i<n;++i) {
    sum += v[i].second;
    if(sum >=k) {
      cout << v[i].first << endl;
      break;
    }
  }
  return 0;
}
