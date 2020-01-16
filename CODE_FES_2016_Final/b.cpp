#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n;cin>>n;
  vector<int> v;
  int l=1;
  while(n>0){
    if(n>=l){
      v.push_back(l);
      n-=l;
      ++l;
    } else {
      break;
    }
  }
  for(int i=0;i<n;++i) ++v[v.size()-1-i];
  for(int j=0;j<v.size();++j) cout << v[j] << endl;
  return 0;
}
