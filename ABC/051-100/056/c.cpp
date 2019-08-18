// ABC 056
#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const int inf=1000000007;

int main() {
  int x;cin >>x;
  int n = 0;
  while(2*x>n*(n+1)) ++n;
  cout << n << endl;
  return 0;
}
