#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  string s;cin >>s;
  if(s=="Sunny"){
    cout << "Cloudy";
  } else if(s=="Cloudy"){
    cout << "Rainy";
  } else {
    cout << "Sunny";
  }
  return 0;
}
