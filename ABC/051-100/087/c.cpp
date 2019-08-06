#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin>>n;
  vector<int> v1(n),v2(n);
  for(int i=0;i<n;++i)cin >> v1[i];
  for(int i=0;i<n;++i)cin >> v2[i];
  vector<int> sum1(n,0),sum2(n,0);
  sum1[0] = v1[0];
  sum2[n-1] = v2[n-1];
  for(int i=1;i<n;++i){
    sum1[i] = sum1[i-1] + v1[i];
  }
  for(int i=n-2;i>=0;--i){
    sum2[i] = sum2[i+1] + v2[i];
  }
  int max_v = 0;
  for(int i=0; i<n;++i){
    max_v = max(max_v, sum1[i]+ sum2[i]);
  }
  cout << max_v << endl;
  return 0;
}
