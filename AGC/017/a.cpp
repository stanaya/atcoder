#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;

vector<vector<ll>> comb(int n){
  vector<vector<ll>> v(n+1, vector<ll>(n+1,0));
  for (int i=0;i< n+1;++i){
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for (int j=1;j< n+1;++j){
    for (int k=1;k< j;++k){
      v[j][k] = v[j-1][k-1]+ v[j-1][k];
    }
  }
  return v;
}

int main() {
  int n,p;cin >> n>>p;
  std::vector<int> a(n);
  for(int i=0;i<n;++i){
    cin >> a[i];
    a[i] = a[i]%2;
  }
  ll cnt1 = count(all(a),1);
  auto comb1 = comb(cnt1);
  ll cnt0 = count(all(a),0);
  ll cnt1_p = 0;
  for(int i=p;i<=cnt1;++i)if(i%2==p) cnt1_p += comb1[cnt1][i];
  ll out = cnt1_p * (ll)pow(2LL,cnt0);

  cout << out << endl;
  return 0;
}
