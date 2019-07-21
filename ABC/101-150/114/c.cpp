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
int out =0;
string s;
int v[3];
vector<int> nums;
vector<int> buf;

void dfs(int i, const int size, const int range_start, const int range_end)
{
  if (i == size) {
    int c3 = count(buf.begin(),buf.end(),3);
    int c5 = count(buf.begin(),buf.end(),5);
    int c7 = count(buf.begin(),buf.end(),7);
    if(c3>0&&c5>0&&c7>0){
      int out = 0;
      for(int i = 0; i < buf.size(); ++i){
        out = 10*out + buf[i];
      }
      if (out <= n){
        nums.push_back(out);
      }
      //cout << out << endl;
    }
  }
  else{
    for(int j = range_start; j <= range_end; ++j){
      buf[i] = v[j];
      dfs(i + 1, size, range_start, range_end);
    }
  }
}

int main(void)
{
  v[0]=3;v[1]=5;v[2]=7;
  cin >> n;
  int size = 3;
  int range_start = 0;
  int range_end = 2;
  for(int k = 3;k<=(int)to_string(n).size();++k){
    buf.resize(k);
    dfs(0, k, range_start, range_end);
  }
  cout << nums.size() << endl;
  return 0;
}
