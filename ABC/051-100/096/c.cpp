#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
ll mod=1000000007;
string s;

int main() {
	int h,w;cin >> h>>w;
	vector<string> v;
	for (int i=0;i<h;++i){
		string s;cin>>s;
		v.push_back(s);
	}
  bool isconnect = true;
	for (int j=0;j<h;++j){
		for (int k=0;k<w;++k){
      int cnt =0;
			if(v[j].substr(k,1)=="#") {
        if(j-1>=0 && v[j-1].substr(k,1)=="#")++cnt;
        if(j+1<h && v[j+1].substr(k,1)=="#")++cnt;
        if(k-1>=0 && v[j].substr(k-1,1)=="#")++cnt;
        if(k+1<w && v[j].substr(k+1,1)=="#")++cnt;
        if(cnt==0) isconnect = false;
			}
      if(!isconnect) break;
		}
    if(!isconnect) break;
	}
  if (isconnect) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
