//ABC-075-c
#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
const int limit = 50;
bool graph[limit][limit];
int a[limit],b[limit];
bool visited[limit];
int n,m;

void dfs(int id){
  visited[id] = true;
  for (int k=0;k<n;++k){
    if(graph[id][k] == false) continue;
    if(visited[k] == true) continue;
    dfs(k);
  }
}

int main() {
  cin >> n >> m;
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      graph[i][j] = false;
    }
  }
  for(int i=0;i<m;++i){
    cin >> a[i]>>b[i];
    --a[i];--b[i];
    graph[a[i]][b[i]] = true;
    graph[b[i]][a[i]] = true;
  }
  int ans=0;
  for(int i=0;i<m;++i){
    graph[a[i]][b[i]] = false;
    graph[b[i]][a[i]] = false;

    for(int j=0;j<n;++j) visited[j] = false;
    dfs(0);

    bool bridge = false;
    for(int k =0;k<n;++k) if(visited[k] == false) bridge = true;
    if(bridge) ++ans;
    graph[b[i]][a[i]] = true;
    graph[a[i]][b[i]] = true;
  }

  cout << ans << endl;
  return 0;
}
