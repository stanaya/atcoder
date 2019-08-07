#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin>>n;
  string s;cin>>s;
  int cnt=0;
  for(int i=n-2;i>=0;--i){
    auto sub = s.substr(i,2);
    if(sub=="#.")++cnt_l;
  }
  cout << min(cnt_l,cnt_r) << endl;
  return 0;
}
