#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n;cin >> n;
  vector<int> b(n-1);
  for(int i=0;i<n-1;++i)cin >>b[i];
  int sum = b[0];
  for(int i=0;i<n-2;++i){
    sum += min(b[i], b[i+1]);
  }
  sum += b[n-2];
  cout << sum << endl;
  return 0;
}
