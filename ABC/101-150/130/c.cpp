#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  ll w,h,x,y; cin >> w >> h >> x >> y;
  double area;
  int d;
  area = ((double)w * (double)h) / 2.0d;
  if(w/2==x &&  w%2==0 && h/2==y && h%2==0){
    d=1;
  } else {
    d=0;
  }
  cout << std::fixed << std::setprecision(10)<< area << " "<< d << endl;
  return 0;
}
