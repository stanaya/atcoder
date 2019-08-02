#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int n;cin >>n;
  int sum=0;
  while(n>0){
    sum += n%10;
    n /=10;
  }
  if(sum==1) sum*=10;
  cout << sum << endl;
  return 0;
}
