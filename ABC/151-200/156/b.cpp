#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  int n,k;cin >>n>>k;
  int out =1;
  while(n>0){
    if(n>=k)++out;
    n/=k;
  }
  cout << out << endl;
  return 0;
}
