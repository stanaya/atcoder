#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll n,k;cin >> n >> k;
  ll cnt_k = 0;
  ll tk = k;
  while(tk<=n){
    ++cnt_k;
    tk +=k;
  }
  ll cnt_kh = 0;
  if(k%2 ==0){
    ll tkh = k/2;
    while(tkh<=n){
      ++cnt_kh;
      tkh +=k;
    }
  }
  ll out = 0;
  out += cnt_k*cnt_k*cnt_k;
  out += cnt_kh*cnt_kh*cnt_kh;
  cout << out << endl;
  return 0;
}
