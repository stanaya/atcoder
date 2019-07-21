#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n,d;cin >> n>>d;
  int out = n/(2*d+1);
  if(n%(2*d+1) !=0) ++out;
  cout << out << endl;
  return 0;
}
