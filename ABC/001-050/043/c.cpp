#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	int n, int_x;
	int out = 0;
	double x = 0.0;
	vector<int> a;
	string buf;
	cin >> n;
	while (getline(cin, buf, ' ')) {
		x += stof(buf) / double(n);
		a.push_back(stoi(buf));
	}
	int_x = int(round(x));
	for (size_t i = 0; i < a.size(); ++i) {
		out += pow(int_x - a[i],2.0);
	}

	cout << out << endl;
	return 0;
}
