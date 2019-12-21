#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n;cin>>n;
  vector<pair<double,double>> vpos;
  int num = 1;
  for(int i=0;i<n;++i) {
    num *= i+1;
    double x,y;cin >> x >>y;
    vpos.push_back(make_pair(x,y));
  }
  vector<int> v(n);
  iota(v.begin(), v.end(), 1);
  double tot_dist = 0.0d;
  do {
    for(int j=1;j<n;++j){
      tot_dist += sqrt( (vpos[v[j-1]-1].first - vpos[v[j]-1].first)*(vpos[v[j-1]-1].first - vpos[v[j]-1].first) + (vpos[v[j-1]-1].second - vpos[v[j]-1].second)*(vpos[v[j-1]-1].second - vpos[v[j]-1].second) );
    }
  } while( next_permutation(v.begin(), v.end()) );

  cout << setprecision(10)<<fixed<<tot_dist/(double)num << endl;
  return 0;
}
