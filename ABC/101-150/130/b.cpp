#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n, x; cin >> n >> x;
  int out=0;
  int cnt=1;
  for(int i =0; i<n;++i){
    int in,tmp;cin>>in;
    tmp = out + in;
    if(tmp<=x) {
      out = tmp;
      ++cnt;
    } else {
      break;
    }
  }
  cout << cnt << endl;
  return 0;
}
