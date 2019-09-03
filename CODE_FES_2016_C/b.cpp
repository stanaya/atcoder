#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int k,t;cin >> k>>t;
  vector<int> a(t);
  repi(i,0,t) cin >> a[i];
  sort(all(a), greater<int>());
  int day = a[0];
  repi(i,1,t){
    day -= a[i];
  }
  --day;
  cout << max(day,0) << endl;
  return 0;
}
