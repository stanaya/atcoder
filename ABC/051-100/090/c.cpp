#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
string s;

int main() {
  ll n,m;cin >> n >> m;
  ll out;
  if(n==1){
    if(m==1){
      out = 1;
    } else if(m==2){
      out ==0;
    } else {
      out = m-2;
    }
  } else if(n==2) {
    out =0;
  } else {
    if(m==1){
      out = n-2;
    } else if(m==2){
      out =0;
    } else {
      out = (n-2)*(m-2);
    }
  }
  cout << out << endl;
  return 0;
}
