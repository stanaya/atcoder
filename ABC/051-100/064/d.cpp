#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)

int main() {
  int n;cin >>n;
  string s,ladd="";cin>>s;
  stack<string> st;
  for(int i=0;i<n;++i){
    if(s[i]=='('){
      st.push("(");
    } else {
      if(!st.empty()){
        st.pop();
      } else {
        ladd += "(";
      }
    }
  }
  string out = ladd + s;
  for(int i=0;i<st.size();++i) out += ")";
  cout << out << endl;
  return 0;
}
