#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int a,b,c;cin >> a>>b>>c;
  int rest = a-b;
  cout << max(c-rest, 0) << endl;
  return 0;
}
