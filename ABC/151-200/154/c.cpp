#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  set<int> st;
  int n; cin>>n;
  repi(i,0,n){
    int t;
    cin >>t;
    st.insert(t);
  }
  if(st.size()==n){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
