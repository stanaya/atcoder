#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  string s;cin >>s;
  set<string> st;
  for(int i=0;i<s.size();++i) st.insert(s.substr(i,1));
  if(st.size()==1){
    cout << 0 << endl;
    return 0;
  }
  int min_cnt = s.size()+ 100;
  for(auto ele:st){
    string tmp = s;
    int t_cnt=0;
    int cnt = 0;
    while(tmp.size()>t_cnt){
      int t_cnt2=0;
      string tmp2 = "";
      for(int j=0;j<tmp.size()-1;++j){
        auto sub =tmp.substr(j,1);
        auto sub2 = tmp.substr(j+1,1);
        if(sub == ele || sub2 == ele){
          tmp2 += ele;
          ++t_cnt2;
        } else {
          tmp2 += sub;
        }
      }
      tmp = tmp2;
      cout << tmp << endl;
      ++cnt;
      t_cnt = t_cnt2;
    }
    min_cnt = min(min_cnt,cnt);
  }
  cout << min_cnt << endl;
  return 0;
}
