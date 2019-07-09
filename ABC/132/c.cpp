#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n; cin >> n;
  vector<int> v(n);
  for(int i=0; i<n; ++i) {
    cin >> v[i];
  }
  sort(all(v));
  int h = v[n/2-1];
  int hn = v[n/2];
  int cnt =0;
  if(h < hn){
    cnt += hn - h;
  }
  cout << cnt << endl;
  return 0;
}
