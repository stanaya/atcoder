#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int r,x,d; cin >>r>>d>>x;
  for(int i=0;i<10;++i){
    x=r*x-d;
    cout << x<< endl;
  }
  return 0;
}
