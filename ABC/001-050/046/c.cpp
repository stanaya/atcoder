#include<bits/stdc++.h>
using namespace std;
#define all(a)  (a).begin(),(a).end()
typedef long long ll;
const ll mod=1000000007;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)

int main() {
	int n; cin >> n;
	ll a=1;
	ll t=1;
	repi(i,0,n){
		ll ttmp, atmp;
		cin >> ttmp >> atmp;
		ll xt = t/ttmp;
		if(t%ttmp != 0) xt++;
		ll xa = a/atmp;
		if(a%atmp != 0) xa++;
		ll x = max(xt,xa);
		t = ttmp*x;
		a = atmp*x;
	}
	cout << t+a << endl;
	return 0;
}
