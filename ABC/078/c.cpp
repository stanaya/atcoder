#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n,m; cin >> n >> m;
  int x = 100*(n-m) +  m * 1900;
  int x1 = x*(int)pow(2,m);
  cout << x1 << endl;
  return 0;
}
