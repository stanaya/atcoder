#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n,c,k;cin >> n >>c>>k;
  vector<int> t(n);
  for(int i=0;i<n;++i) cin >> t[i];
  sort(all(t));
  int cnt =0;
  int start = t[0];
  int cnt_pas = 1;
  for(int i=1;i<n;++i){
    if((t[i]-start<=k) && (cnt_pas<c)){
      ++cnt_pas;
    } else if((cnt_pas==c) || (t[i]-start>k)) {
      ++cnt;
      cnt_pas = 1;
      start = t[i];
    }
  }
  if(cnt_pas!=0) ++cnt;
  cout << cnt << endl;
  return 0;
}
