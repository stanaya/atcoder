#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  ll n,m;cin >> n >> m;
  priority_queue<ll> que;
  for(ll i=0;i<n;++i) {
    ll a;cin >> a;
    que.push(a);
  }
  while(m>0){
    auto tmp = que.top();
    que.pop();
    tmp /= 2LL;
    --m;
    que.push(tmp);
  }
  ll out = 0;
  while(!que.empty()){
    out += que.top();
    que.pop();
  }
  cout << out << endl;
  return 0;
}
