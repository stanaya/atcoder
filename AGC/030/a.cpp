#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll a,b,c;cin>>a>>b>>c;
  if(a+b>=c){
    cout << b+c << endl;
  } else {
    cout << min(a+2*b+1, b+c) << endl;
  }
  return 0;
}
