#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n; cin>> n;
  vector<int> a(n);
  for(int i=0;i<n;++i){
    cin>>a[i];
  }
  int cnt =0;
  for(int i=1;i<n;++i){
    if(a[i-1]==a[i]) {
      ++cnt;
      a[i] = 100*a[i]+1;
    }
  }
  cout << cnt << endl;
  return 0;
}
