#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin >>n;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  int cnt =0;
  for(int i = 1; i < n-1; i++){
    if((v[i-1]<v[i]) && v[i]<v[i+1]){
      ++cnt;
    } else if((v[i-1]>v[i]) && v[i]>v[i+1]) {
      ++cnt;
    }
  }
  cout << cnt << endl;
  return 0;
}
