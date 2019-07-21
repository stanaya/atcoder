#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
string s;

int main() {
  cin >> s;
  int k;cin >> k;
  set<string> st;
  for (int i=1; i<=k;++i){
    for (int j=0; j<s.size()-i+1;++j){
      string sub = s.substr(j,i);
      st.insert(sub);
    }
  }
  vector<string> vt;
  for(auto itr = st.begin(); itr != st.end();++itr){
    vt.push_back(*itr);
  }
  sort(vt.begin(), vt.end());
  cout << vt[k-1] << endl;
  return 0;
}
