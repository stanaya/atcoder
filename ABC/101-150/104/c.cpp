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
  int d,g;cin>>d>>g;
  vector<pair<int, int>> v;
  n=0;
  for (i=0;i<d;++i){
    int p,c;cin>>p>>c;
    n+=p;
    v.push_back(make_pair(p,c));
  }
  int min_cnt=n;
  for (int bit=0;bit < (1<<d); ++bit) {
    int score = 0;
    int cnt_t = 0;
    int max_i = 0;
    for (i=0;i<v.size();++i){
      if (bit & (1<<i)) {
        score += 100*(i+1)*v[i].first + v[i].second;
        cnt_t += v[i].first;
      } else {
         max_i = i;
      }
    }
    if (score < g) {
    	int s1 = 100*(max_i+1);
      int rest = (g - score)/s1;
      if ((g - score)%s1 > 0) ++rest;
      if (rest < v[max_i].first) {
      	cnt_t += rest;
      } else {
      	continue;
      }
    }
    min_cnt = min(min_cnt,cnt_t);
  }
  cout << min_cnt << endl;
  return 0;
}
