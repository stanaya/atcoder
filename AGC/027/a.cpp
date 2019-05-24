#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
string s;

int main() {
  int n,x;cin >>n>>x;
  std::vector<int> v(n);
  for(int i=0;i<n;++i) cin>>v[i];
  sort(v.begin(),v.end());
  int cnt=0;
  for(int j=0;j<n;++j) {
    if(x<0) break;
    x-=v[j];
    ++cnt;
  }
  if (x>0||x<0) --cnt;
  cout << max(cnt,0) << endl;
  return 0;
}
