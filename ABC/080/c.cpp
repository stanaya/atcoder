#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;

int fbit(vector<int>& v){
  int out = 0;
  for(int l =0; l< v.size(); ++l){
    out += v[l]*(int)pow(2,l);
  }
  return out;
}

int main() {
  int n;cin >> n;
  vector<vector<int>> f, p;
  for(int i=0;i<n;++i){
    vector<int> fi;
    for(int j=0;j<10;++j){
      int fij;cin>> fij;
      fi.push_back(fij);
    }
    f.push_back(fi);
  }
  for(int i=0;i<n;++i){
    vector<int> pi;
    for(int j=0;j<11;++j){
      int pij;cin>> pij;
      pi.push_back(pij);
    }
    p.push_back(pi);
  }
  int max_c = -1000000007;
  for (int bit=0;bit < (1<<10); ++bit) {
    int c = 0;
    for (int k=0; k<n; ++k) {
      int f_bit = fbit(f[k]);
      int flag = (bit&f_bit);
      int cnt_f =0;
      for(int l=0; l< 10; ++l){
        if (flag & (1<<l)) ++cnt_f;
      }
      c += p[k][cnt_f];
    }
    max_c = max(max_c, c);
  }
  cout << max_c << endl;
  return 0;
}
