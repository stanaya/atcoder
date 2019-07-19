#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
int cnt=0;
int n;
vector<vector<int>> v;

void dfs(int val, int id){
  if(id==n){
    if(val%2==0) ++cnt;
    return;
  }
  dfs(val*v[id][0], id+1);
  dfs(val*v[id][1], id+1);
  dfs(val*v[id][2], id+1);
  return;
}

int main() {
  cin>>n;
  for(int i=0;i<n;++i){
    int a;cin>>a;
    vector<int> t;
    t.push_back(a-1);
    t.push_back(a);
    t.push_back(a+1);
    v.push_back(t);
  }
  dfs(1,0);
  cout << cnt << endl;
  return 0;
}
