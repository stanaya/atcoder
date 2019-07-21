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
  cin>>s;
  int out =0;
  for(i=0;i<s.size()-1;++i)if(s.substr(i,1)!=s.substr(i+1,1)) ++out;
  cout << out << endl;
  return 0;
}
