#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0;i<n;++i) cin >> a[i];
  int b_0=0;
  int coef = 1;
  for (int i=0;i<n;++i) {
    b_0 += coef * a[i];
    coef *=-1;
  }
  vector<int> b(n);
  b[0] = b_0;
  for (int i=1;i<n;++i){
  	b[i] = 2*(a[i-1]-b[i-1]/2);
  }
  for (int i=0;i<n;++i){
     cout << b[i] << " ";
  }
  return 0;
}
