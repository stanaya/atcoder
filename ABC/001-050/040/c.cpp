#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;++i) cin >> a[i];
  int cost[n];
  for(int i=0;i<n;++i)cost[i] = 1000000007;
  cost[0] = 0;
  for(int i=0;i<n-1;++i){
    cost[i+1] = min(cost[i+1],cost[i] + abs(a[i+1]-a[i]));
    if(i<n-2)cost[i+2] = min(cost[i+2], cost[i] + abs(a[i+2]-a[i]));
  }
  cout << cost[n-1] << endl;
  return 0;
}
