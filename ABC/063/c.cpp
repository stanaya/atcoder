#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n; cin >> n;
  vector<int> v(n);
  bool isall10 = true;
  for (int i=0;i<n;++i){
    cin >> v[i];
    if(v[i]%10 != 0) isall10 =false;
  }
  sort(all(v));
  int sum = accumulate(all(v), 0);
  if(sum%10 !=0){
    cout << sum << endl;
    return 0;
  }
  if(isall10){
    cout << 0 << endl;
    return 0;
  }
  for(int i=0;i<n;++i){
    if(v[i]%10!=0){
      sum -= v[i];
      break;
    }
  }
  cout << sum << endl;
  return 0;
}
