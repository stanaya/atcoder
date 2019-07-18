#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin>>n;
  vector<int> t(n),out;
  for(int i=0;i<n;++i) cin >> t[i];
  while(t.size()>0){
    bool found=false;
    int t_size = t.size();
    for(int i=0;i<t_size;++i){
      if(t[t_size-1-i] == t_size-i){
        out.push_back(t[t_size-1-i]);
        t.erase(t.begin()+ t_size-1-i);
        found =true;
        break;
      }
    }
    if(!found) break;
  }
  if(t.size()==0){
    for(int i=0;i<n;++i){
      cout << out[n-1-i] << endl;
    }
  } else {
    cout << -1 << endl;
  }
  return 0;
}
