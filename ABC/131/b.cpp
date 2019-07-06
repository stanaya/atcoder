#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n,l;cin >> n >> l;
  vector<int> v(n);
  for(int i=1;i< n+1 ;++i){
    v[i-1] = l+i-1;
  }
  sort(all(v), [](int a, int b){return abs(a) < abs(b);});
  cout << accumulate(all(v), 0) - v[0] << endl;
  return 0;
}
