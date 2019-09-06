#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
typedef pair<ll, ll> pll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n;cin >> n;
  priority_queue<pll, vector<pll>, greater<pll>> q;
  repi(i,0,n){
    ll t; cin >> t;
    q.push(make_pair(t,1));
  }
  while(q.size()>1){
    pll val = q.top();
    q.pop();
    pll val_next = q.top();
    q.pop();
    ll val_cnt = val_next.second;
    if(val_next.first<=2*val.first) val_cnt += val.second;
    q.push(make_pair(val_next.first + val.first, val_cnt));
  }
  cout << q.top().second << endl;
  return 0;
}
