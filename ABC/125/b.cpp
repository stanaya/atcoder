#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin>>n;
  vector<int> v;
  for(int i=0;i<n;++i){
    int t;cin>>t;
    v.push_back(t);
  }
  int val =0;
  for(int i=0;i<n;++i){
    int t;cin>>t;
    if(t<v[i]) val += v[i] - t;
  }
  cout << val << endl;
  return 0;
}
