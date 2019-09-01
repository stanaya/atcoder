#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n;cin>>n;
  int cnt = 0;
  map<int, int> mp;
  int arr_cnt = 0;
  repi(i,0,n) {
    int t;cin >> t;
    if(t == i+1){
      ++arr_cnt;
    } else {
      if(arr_cnt == 0) continue;
      if(mp.find(arr_cnt) == mp.end()){
        mp[arr_cnt] = 1;
      } else {
        mp[arr_cnt] = mp[arr_cnt] + 1;
      }
      arr_cnt =0;
    }
  }
  if(arr_cnt >0){
    if(mp.find(arr_cnt) == mp.end()){
      mp[arr_cnt] = 1;
    } else {
      mp[arr_cnt] = mp[arr_cnt] + 1;
    }
  }
  int out = 0;
  for(auto&& ele:mp){
    //cout << ele.first << " " << ele.second << endl;
    if(ele.first == 1){
      out += ele.second;
    } else {
      out += (ele.first/2 + ele.first%2) * ele.second;
    }
  }
  cout << out << endl;
  return 0;
}
