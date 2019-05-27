#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
string s;

int main() {
  int n;cin >> n;
  int cnt2=0;
  int cnt4=0;
  for (int i=0;i<n;++i){
    int t;cin>>t;
    if(t%4==0){
      ++cnt4;
    } else if(t%2==0){
      ++cnt2;
    }
  }
  if(cnt2+2*cnt4>=(n/2)*2){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
