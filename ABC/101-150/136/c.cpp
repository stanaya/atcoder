#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin >>n;
  if(n==1){
    cout << "Yes" << endl;
    return 0;
  }
  vector<int> v(n);
  for(int i=0;i<n;++i) cin >> v[i];
  for(int i=n-1;i>0;--i)if(v[i]<v[i-1])--v[i-1];
  bool valid = true;
  for(int i=0;i<n-1;++i){
    if(v[i]>v[i+1]){
      valid = false;
      break;
    }
  }
  if(valid){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
