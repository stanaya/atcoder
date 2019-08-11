#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int a,b;cin >>a>>b;
  cout << max(max(a+b,a-b),a*b) << endl;
  return 0;
}
