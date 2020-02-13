#include <iostream>
using namespace std;

int main() {
	long long n,a,b;cin >>n>>a>>b;
	if((b-a)%2==0){
		cout << (b-a)/2 << endl;
	} else {
		cout << min(a-1,n-b) + (b-a)/2 + 1 << endl;
	}
	return 0;
}
