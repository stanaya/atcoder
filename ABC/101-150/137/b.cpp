#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int k,x;cin >> k>>x;
  for(int i = max(x-k+1, -1000000);i<= min(x+k-1,1000000);++i){
    cout << i << " ";
  }
  return 0;
}
