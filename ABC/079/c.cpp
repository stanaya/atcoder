#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int i,j,k;
string s;

int main() {
  cin >> s;
  vector<int> v;
  for (i=0;i<s.length();i++) v.push_back(stoi(s.substr(i,1)));
  for (int bit=0;bit < (1<<s.length()-1); ++bit) {
    int sum = v[0];
    string out = to_string(v[0]);
    for (i = 0; i < v.size() - 1; ++i) {
      if (bit & (1<<i)) {
        sum += v[i+1];
        out = out + "+";
      } else {
        sum -= v[i+1];
        out = out + "-";
      }
      out = out + to_string(v[i + 1]);
    }
    out = out + "=7";
    if (sum == 7) {
      cout << out << endl;
      return 0;
    }
  }
  return 0;
}
