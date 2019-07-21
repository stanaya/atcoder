#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n; cin >> n;
  int INF = 1000000000;
  vector<pair<int, int>> red, blue;
  for(int i=0; i<n;++i){
    int x,y;cin >> x >> y;
    red.push_back(make_pair(y,x));
  }
  for(int i=0; i<n;++i){
    int x,y;cin >> x >> y;
    blue.push_back(make_pair(x,y));
  }
  sort(all(blue));
  sort(all(red),greater<pair<int, int>>());
  int cnt=0;
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      if(blue[i].first > red[j].second && blue[i].second > red[j].first){
        ++cnt;
        red[j] = make_pair(INF, INF);
        break;
      }
    }
  }

  cout << cnt << endl;
  return 0;
}
