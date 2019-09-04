#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;

int main() {
  int n,m;cin >> n>>m;
  int out;
  int sqrt_m = (int)sqrt(m);
  vector<int> vd;
  for(int i=sqrt_m;i>=1;--i){
    if(m%i!=0) continue;
    int tmp = m/i;
    cout << tmp << endl;
    if(i<=m/n) vd.push_back(i);
    if(tmp<=m/n) vd.push_back(tmp);
  }
  sort(all(vd), greater<int>());
  cout << vd[0] << endl;
  return 0;
}
