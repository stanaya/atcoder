#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

map<string, int> count_strings(string s) {
  map<string,int> mp;
  for(int i=0;i<s.size();++i){
    auto sub = s.substr(i,1);
    if(mp.find(sub) == mp.end()){
      mp[sub] =1;
    } else {
      mp[sub] +=1;
    }
  }
  return mp;
}

int main() {
  auto mp = count_strings(s);

  return 0;
}
