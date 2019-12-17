#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n,t;cin >> n>>t;
  int prev;
  int time = 0;
  for(int i=0;i<n;++i){
    int tmp;cin >> tmp;
    if(i>0){
      if(tmp-prev>t){
        time +=t;
      } else {
        time += tmp-prev;
      }
    }
    prev=tmp;
  }
  cout << time+t << endl;
  return 0;
}
