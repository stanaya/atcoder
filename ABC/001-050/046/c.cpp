#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n; cin >> n;
	long long vt;
	long long va;
	for (int i =0; i<n; ++i) {
		int t,a; cin >> t >> a;
		if(i == 0) {
			vt = t;
			va = a;
		}
		if (vt > va) {
			va = max(t,a) * va /min(t,a);
		} else  if (vt > va){

		}

	}
	// your code goes here
	return 0;
}
