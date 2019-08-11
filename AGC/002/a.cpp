#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int a,b;cin >>a>>b;
  if(a<=0 && b>=0){
    cout << "Zero" << endl;
  } else if(a>0){
    cout << "Positive" << endl;
  } else {
    if(((b-a)+1)%2==0){
      cout << "Positive" << endl;
    } else {
      cout << "Negative" << endl;
    }
  }
  return 0;
}
