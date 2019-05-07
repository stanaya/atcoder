#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
int i,j,k,n,m;
string s;

int main() {
  cin>>n;
  vector<pair<float,float>> v;
  for(i=0;i<n;++i){
    float x,y;cin >> x >> y;
    v.push_back(make_pair(x,y));
  }

  float l=0.0;
  for (j=0;j<n;++j){
    for (k=j;k<n;++k){
      float lt = sqrt(pow(v[j].first-v[k].first,2.0)+ pow(v[j].second-v[k].second,2.0));
      if (lt > l) l=lt;
    }
  }
  cout << l << endl;
  return 0;
}
