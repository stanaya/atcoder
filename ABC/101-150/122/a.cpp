#include <iostream>
#include <string>
using namespace std;

string CounterPart(char symbol) {
	string ret;
	if (symbol == 'A') {
		ret = "T";
	} else if (symbol == 'T'){
		ret = "A";
	} else if (symbol == 'C'){
		ret = "G";
	} else if (symbol == 'G'){
		ret = "C";
	}
	return ret;
}

int main() {
	string b, a;
	cin >> b;
	for (int i = 0; i < b.size(); ++i ) {
		a += CounterPart(b[i]);
	}
	cout << a << endl;
	return 0;
}
