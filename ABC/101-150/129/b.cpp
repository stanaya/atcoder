#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin >> n;
  vector<int> v(n);
  int sum =0;
  for(int i=0;i<n;++i){
    int t;cin >>t;
    sum += t;
    v[i] = sum;
  }
  int min_val=sum;
  for(int i=0;i<n;++i){
    min_val = min(min_val, abs(2*v[i]-sum));
  }
  cout << min_val << endl;

  return 0;
}
