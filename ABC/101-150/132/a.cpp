#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  string s;cin >> s;
  map<string, int> mp;
  for (int i =0; i< s.size();++i){
    auto sub = s.substr(i,1);
    if(mp.find(sub) != mp.end()){
      mp[sub] = mp[sub] + 1;
    } else {
      mp[sub] = 1;
    }
  }
  if(mp.size() != 2){
    cout << "No" << endl;
  } else {
    for(auto itr = mp.begin(); itr != mp.begin(); ++itr){
      if(itr->second !=2){
        cout << "No" << endl;
        return 0;
      }
    }
    cout << "Yes" << endl;
  }
  return 0;
}
