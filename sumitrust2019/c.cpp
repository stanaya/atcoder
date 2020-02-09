#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int x;cin >> x;
  int a = x/100;
  int b = x%100;
  int bc =  b/5;
  if(b%5!=0) ++bc;
  if(bc>a){
    cout << 0 << endl;
  } else {
    cout << 1 << endl;
  }
  return 0;
}
