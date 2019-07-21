#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int a,b,t;cin>>a>>b>>t;
  int time = a;
  int cnt =0;
  while(time<=t){
    cnt += b;
    time += a;
  }
  cout << cnt << endl;
  return 0;
}
