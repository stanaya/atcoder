#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  string s;cin >>s;
  int q;cin >>q;
  int cnt_r = 0;
  string head_s = "";
  string tail_s = "";
  for(int i=0;i<q;++i){
    int t,f;
    string c;
    cin >>t;
    if(t==1) {
      ++cnt_r;

    } else {
      cin >> f>>c;
      if(f==1){
        if(cnt_r%2==0){
          head_s = c+head_s;
        } else {
          tail_s = tail_s+c;
        }
      } else {
        if(cnt_r%2==1){
          head_s = c+head_s;
        } else {
          tail_s = tail_s+c;
        }
      }
    }
  }
  string out;
  if(cnt_r%2==1){
    reverse(all(s));
    reverse(all(tail_s));
    reverse(all(head_s));
    swap(head_s,tail_s);
  }
  cout << head_s+s+tail_s << endl;
  return 0;
}
