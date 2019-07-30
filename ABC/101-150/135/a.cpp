#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int a,b;cin >>a>>b;
  if(abs(a-b)%2 != 0){
    cout << "IMPOSSIBLE" << endl;
  } else {
    cout << min(a,b) + abs(a-b)/2 << endl;
  }
  return 0;
}
