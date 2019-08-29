#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;

int main() {
  	int n, k;
  	string s;
  	cin >> n >> k;
  	cin >> s;
    vector<int> vec1(n);
    vector<pair<int,int>> vec0;
    string start_str = s.substr(0,1);
    int start_id = 0;
    int end_id = 0;
  	for (int i = 1; i < n; ++i) {
      auto sub = s.substr(i,1);
      if(start_str != sub){
        if(start_str == "0") vec0.push_back(make_pair(start_id,end_id));
        if(start_str == "1") {
          vec1[start_id] = end_id;
          vec1[end_id] = start_id;
        }
        start_str = sub;
        start_id = i;
      }
      end_id = i;
      if(i==n-1){
        if(start_str == "0") vec0.push_back(make_pair(start_id,end_id));
        if(start_str == "1") {
          vec1[start_id] = end_id;
          vec1[end_id] = start_id;
        }
      }
    }
    int max_out = 0;
    for(int j=0;j<vec0.size();++j){
      int zero_start = vec0[j].first;
      int str_start = zero_start;
      if(zero_start > 0){
        str_start = vec1[zero_start-1];
      }
      int vec0_endid = min(j+k-1, (int)vec0.size()-1);
      int zero_end = vec0[vec0_endid].second;
      int str_end = zero_end;
      if(zero_end < n-1){
        str_end = vec1[zero_end+1];
      }
      max_out = max(max_out, str_end - str_start + 1);
    }
    if(vec0.size()==0) max_out = n;
    cout << max_out << endl;
	return 0;
}
