#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  int n,k,r,s,p;
  cin >> n>>k;
  cin >> r>>s>>p;
  string t;cin >>t;
  int score = 0;
  string prev="";
  for(int i=0;i<t.size();++i){
    string tmp = t.substr(i,1);
    if(i<k){
      if(tmp =="r") {
        score += p;
        prev += "p";
      } else if(tmp =="s"){
        score += r;
        prev += "r";
      } else {
        score += s;
        prev += "s";
      }
    } else {
      string tmp_p = prev.substr(i-k,1);
      if(tmp =="r") {
        if(tmp_p != "p"){
          score += p;
          prev += "p";
        } else {
          prev += "x";
        }
      } else if(tmp =="s"){
        if(tmp_p != "r"){
          score += r;
          prev += "r";
        } else {
          prev += "x";
        }
      } else {
        if(tmp_p != "s"){
          score += s;
          prev += "s";
        } else {
          prev += "x";
        }
      }
    }
    //cout << score << endl;
  }
  cout << score << endl;
  return 0;
}
