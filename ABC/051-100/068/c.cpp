#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
string s;

int main() {
  int n,m;cin >> n >>m;
  vector<int> v1;
  vector<int> vn;
  for(int i=0;i<m;++i){
    int a,b;cin >>a>>b;
    if(a==1)v1.push_back(b);
    if(b==n)vn.push_back(a);
  }
  sort(v1.begin(),v1.end());
  sort(vn.begin(),vn.end());
  vector<int> result;
  set_intersection(v1.begin(), v1.end(),
    vn.begin(), vn.end(),
    inserter(result, result.end()));
  if(result.size()>0){
    cout << "POSSIBLE" << endl;
  } else {
    cout << "IMPOSSIBLE" << endl;
  }
  return 0;
}
