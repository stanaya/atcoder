#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
string s;

int main() {
  std::vector<int> v(3);
  cin >> v[0]>>v[1]>>v[2];
  auto max_ele = *max_element(v.begin(),v.end());
  int cnt =0;
  for(int i=0;i<3;++i){
    while(max_ele-v[i]>=2){
      v[i] +=2;
      ++cnt;
    }
  }
  sort(all(v));
  if(v[2]-v[0]==1 && v[2]-v[1]==1){
    ++cnt;
  } else if(v[2]-v[0]==1 && v[2]-v[1]==0){
    cnt += 2;
  }
  cout << cnt << endl;
  return 0;
}
