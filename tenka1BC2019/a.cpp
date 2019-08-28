#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin>>n;
  string s;cin>>s;
  vector<int> v_b(n+1);
  int cnt_b = 0;
  v_b[0] = cnt_b;
  for(int i=1;i<=n;++i){
    auto sub = s.substr(i-1,1);
    if (sub == "#") {
      ++cnt_b;
    }
    v_b[i] = cnt_b;
  }
  int cnt_w=0;
  vector<int> v_w(n+1);
  v_w[n] = cnt_w;
  for(int i=n-1;i>=0;--i){
    auto sub = s.substr(i,1);
    if (sub == ".") {
      ++cnt_w;
    }
    v_w[i] = cnt_w;
  }
  int out = n;
  for(int i=0;i<n+1;++i){
    out = min(out, v_b[i] + v_w[i]);
  }
  cout << out << endl;
  return 0;
}
