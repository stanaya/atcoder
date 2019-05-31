#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int numsplit(vector<tuple<int, int, int>>& vt, vector<int>& vpos) {
  int cntsplit=1;
  auto tmp = vt;
  sort(all(tmp), [](tuple<int, int, int>& a,tuple<int, int, int>& b){return get<0>(a) < get<0>(b);});
  int pos=vpos[0];
  for(int l=0;l<tmp.size();++l){
    cntsplit += distance(find(all(vpos), pos), find(all(vpos),get<0>(tmp[l])));
    pos = get<1>(tmp[l]);
  }
  cntsplit += distance(find(all(vpos), pos), find(all(vpos),vpos[vpos.size()-1]));
  return cntsplit;
}
