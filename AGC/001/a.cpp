#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin>>n;
  vector<int> l(2*n);
  for(int i=0;i<2*n;++i) cin >> l[i];
  sort(all(l));
  int out=0;
  for(int j=0; j<n;++j)out += l[2*j];
  cout << out << endl;
  return 0;
}
