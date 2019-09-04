#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  int n,m;cin >>n>>m;
  int box[n];
  set<int> red_in;
  red_in.insert(0);
  repi(i,0,n)box[i] =1;
  repi(i,0,m){
    int x,y; cin >> x>>y;
    --x;--y;
    box[x] -=1;
    box[y] +=1;
    if(red_in.find(x) != red_in.end()){
      red_in.insert(y);
    }
    if(box[x]==0) red_in.erase(x);
  }
  int out =0;
  repi(i,0,n){
    //cout << box[i] << endl;
    if(box[i]>0){
      if(red_in.find(i) != red_in.end()) ++out;
    }
  }
  cout << out << endl;

  return 0;
}
