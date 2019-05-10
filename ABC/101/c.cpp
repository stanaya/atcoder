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
  cin >> n >>k;
  vector<int> v(n);
  for(i=0;i<n;++i) {
    cin >> v[i];
  }
  auto itr = find(v.begin(),v.end(), 1);
  int id = (int)distance(v.begin(), itr);
  int lids = id;
  int rids = n - id - 1;
  int out = lids/(k-1);
  out += rids/(k-1);
  int rest = lids%(k-1) + rids%(k-1);
  out += rest/(k-1);
  if(rest%(k-1)!=0) out++;
  cout << out << endl;
  return 0;
}
