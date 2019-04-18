#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
long out = 0;

void dfs(const string& s, long sum) {
  if(s.size() == 1) {
     out += stol(s) + sum;
     return;
  }
  out += stol(s);
  for (int i = 1; i < s.size(); ++i ) {
    sum += stol(s.substr(0,i));
    dfs(s.substr(i, s.size() - i), sum);
  }
  return;
}


int main() {
	string s; cin >> s;
  dfs(s, 0);
	cout << out << endl;
	return 0;
}
