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

vector<vector<LL>> comb(int n){
  vector<vector<LL>> v(n+1, vector<LL>(n+1,0));
  for (int i=0;i< n+1;++i){
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for (int j=1;j< n+1;++j){
    for (int k=1;k< j;++k){
      v[j][k] = v[j-1][k-1]+ v[j-1][k];
    }
  }
  return v;
}

int main() {
  int n = 10;
  int r = 6;
  auto v = comb(n);
  cout << v[n][r] << endl;
  return 0;
}
