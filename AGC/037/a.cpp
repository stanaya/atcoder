#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;

int main() {
  string s; cin >> s;
  int cnt =0;
  string prev = "";
  int strlen =1;
  int pos = s.size()-1;
  while(pos>=0){
    auto sub = s.substr(pos,strlen);
    if(prev == sub){
      ++strlen;
      --pos;
    } else {
      prev = sub;
      strlen = 1;
      --pos;
      ++cnt;
    }
  }
  cout << cnt << endl;
  return 0;
}
