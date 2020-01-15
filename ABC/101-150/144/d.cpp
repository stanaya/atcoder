#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  double a,b,x;cin >>a>>b>>x;
  double PI = 4.0d * atan(1.0d);
  if(x>=a*a*b/2.0d){
    cout << setprecision(10)<<fixed <<180.0d/PI * atan(2.0d*(b*a*a - x)/(a*a*a)) << endl;
  } else {
    cout << setprecision(10)<<fixed <<90.0d - 180.0d/PI * atan(2.0d*x/(b*b*a)) << endl;
  }
  return 0;
}
