#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int a,b;cin >> a >>b;
  if(a>=13){
    cout << b << endl;
  } else if(a>=6){
    cout << b/2 << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}
