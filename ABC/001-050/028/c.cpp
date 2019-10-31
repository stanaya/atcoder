#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
  vector<int> v(5), sum;
  for (int i=0;i<5;++i)cin >> v[i];
  for (int bit=0;bit < (1<<5); ++bit) {
    int cnt_flg = 0;
    int tmp = 0;
    for (int i = 0; i < 5; ++i) {
      if (bit & (1<<i)) {
        ++cnt_flg;
        tmp += v[i];
      }
    }
    if (cnt_flg == 3)sum.push_back(tmp);
  }
  sort(all(sum), greater<int>());
  cout << sum[2] << endl;

  return 0;
}
