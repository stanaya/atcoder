#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n;cin>>n;
  int cnt = 1;
  int t;cin>>t;
  int max_v = t;
  int min_v = t;
  for(int i=1;i<n;++i){
    cin>>t;
    if(t>max_v){
      max_v = t;
    } else {
      if(t<min_v){
        min_v = t;
        ++cnt;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}
