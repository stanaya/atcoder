#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
string s;

int main() {
  int n;cin >> n;
  int cnt=0;
  for(int i=0;i<n;++i){
    ll t;cin>>t;
    if(t%2==1) ++cnt;
  }
  string s="YES";
  if(cnt%2==1) s="NO";
  cout << s << endl;
  return 0;
}
