#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int maxd1=0;
  int maxd2=0;
  int maxd3=0;
  int mind1=0;
  int mind2=0;
  int mind3=0;
  int n;cin >> n;
  for(int i=0;i<n;++i){
    double maxt,mint;cin >> maxt >>mint;
    if(maxt >= 35.0){++maxd1;}
    else if(maxt >= 30.0) {++maxd2;}
    else if(maxt >= 25.0) {++maxd3;}
    if(mint >= 25.0){++mind1;}
    else if(mint < 0.0 && maxt >= 0.0) {++mind2;}
    else if(maxt < 0.0) {++mind3;}
  }
  cout << maxd1 << " "<< maxd2 << " " << maxd3 << " " << mind1 << " "<< mind2 << " "<< mind3 << endl;
  return 0;
}
