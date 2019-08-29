#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
const int N = 2e5 + 7;
vector<ll> vout;
vector<vector<int>> vnodes;

void dfs(int node, int prev, ll val){
  vout[node] += val;
  auto nodes = vnodes[node];
  for(int i=0;i<nodes.size();++i){
    if(nodes[i] == prev) continue;
    dfs(nodes[i], node, vout[node]);
  }
}

int main() {
  int n,q;cin >>n >>q;
  vnodes.resize(n);
  vout.resize(n,0LL);
  for(int i=0;i<n-1;++i){
    int a,b;cin>> a>>b;
    vnodes[a-1].push_back(b-1);
    vnodes[b-1].push_back(a-1);
  }
  for(int i=0;i<q;++i){
    int p,x;cin>> p>>x;
    vout[p-1] += x;
  }

  ll tmp = vout[0];
  vout[0] = 0;
  dfs(0, -1,tmp);

  for(int i=0;i<n;++i){
    cout << vout[i] << " ";
  }

  return 0;
}
