#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n,a,b;cin>>n>>a>>b;
  if(a==1 && b-a-1==0){
    cout << "Borys" << endl;
  } else{
    if( (b-a-1)%2==0){
      cout << "Borys" << endl;
    } else {
      cout << "Alice" << endl;
    }
  }
  return 0;
}
