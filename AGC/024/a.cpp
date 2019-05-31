#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll a,b,c,k;cin >>a >>b>>c>>k;
  ll diff;
  if (k%2==0){
    diff = a-b;
  } else {
    diff = b-a;
  }
  if (abs(diff) > (ll)pow(10,18)){
    cout << "Unfair" << endl;
  } else {
    cout << diff << endl;
  }
  return 0;
}
