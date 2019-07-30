#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n; cin >> n;
  //vector<int> v(n);
  int cnt=0;
  for(int i=0;i<n;++i){
    int t;cin>> t;
    if(t!=i+1) ++cnt;
  }
  if(cnt>2){
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }

  return 0;
}
