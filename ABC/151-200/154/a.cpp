#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  string s,t,u;cin >> s>>t;
  int a,b;cin >> a>>b;
  cin >> u;
  if (u==s){
    cout << a-1 << " "<< b<< endl;
  } else {
    cout << a << " "<< b-1<< endl;
  }
  return 0;
}
