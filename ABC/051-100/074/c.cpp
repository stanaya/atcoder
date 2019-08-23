#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int main() {
  int a,b,c,d,e,f;cin >>a>>b>>c>>d>>e>>f;
  double threshold = (double)(100*e)/(double)(100 + e);
  double max_concent = 0.0;
  int max_w = 0;
  int max_s = 0;
  for(int i=0;i<= 30/b;++i){
    for(int j=0;j<= 30/a;++j){
      if(i==0 && j==0) continue;
      int val_w = 100*b*i + 100*a*j;
      int thre_s = (b*i + a*j)*e;
      for(int k=0;k<= thre_s/d;++k){
        for(int l=0;l<= thre_s/c;++l){
          int val_s = d*k + c*l;
          double tmp_concent = (double)(100*val_s)/(double)(val_w + val_s);
          if(val_s + val_w <= f &&  tmp_concent <= threshold){
            if(tmp_concent >= max_concent){
              max_concent = tmp_concent;
              max_s = val_s;
              max_w = val_w;
            }
          }
        }
      }
    }
  }
  cout << max_w + max_s << " " << max_s << endl;
  return 0;
}
