#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n,y; cin >> n >> y;
  int n1,n2,n3;
  n1 = 0;
  n2 = 0;
  n3 = 0;
  for (int i = 0; i < n+1; ++i) {
    for (int j = 0; j < n+1 - i; ++j) {
      for (int k = 0; k < n+1 - i - j; ++k) {
        if (i * 10000 + j * 5000 + k * 1000 == y && i+j+k == n) {
          cout << i << " " << j << " " << k << endl;
          return 0;
        }
      }
    }
  }
  cout << "-1 -1 -1" << endl;
	return 0;
}
