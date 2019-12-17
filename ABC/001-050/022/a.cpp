#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n,s,t;cin >> n>> s>> t;
  int weight=0;
  int cnt =0;
  for (int i=0;i<n;++i){
    int tmp;cin >> tmp;
    weight += tmp;
    if(weight >= s && weight <= t) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}
