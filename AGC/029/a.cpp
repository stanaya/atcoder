#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  string s;cin >> s;
  ll cnt_w=0;
  ll out =0;
  for(int i=s.size()-1;i>=0;--i){
    string sub = s.substr(i,1);
    if(sub =="W"){
      ++cnt_w;
    } else if(sub =="B"){
      out += cnt_w;
    }
  }
  cout << out << endl;
  return 0;
}
