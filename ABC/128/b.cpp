#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
string s;

bool sort2(tuple<int, string, int>&a, tuple<int, string, int>& b) {
  if (get<1>(a) < get<1>(b)) {
    return true;
  } else if(get<1>(a) == get<1>(b)) {
    if(get<2>(a) > get<2>(b)){
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}

int main() {
  int n;cin >> n;
  vector<tuple<int, string, int>> vt;
  int id =1;
  for(int i =0;i<n;++i){
    string c;int p;
    cin >> c >> p;
    vt.push_back(make_tuple(id,c,p));
    ++id;
  }
  sort(vt.begin(),vt.end(), sort2);
  std::vector<int> v(n);
  id =0;
  for (auto itr = vt.begin();itr !=vt.end();++itr){
    v[id] = get<0>(*itr);
    ++id;
  }
  for(int k = 0; k<n;++k){
    cout << v[k] << endl;
  }
  return 0;
}
