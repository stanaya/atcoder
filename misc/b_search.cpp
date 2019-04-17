#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int b_search(const int val, const vector<int>& v) {
	int l_id = 0;
	int r_id = v.size() - 1;
	if (v[r_id] < val) return r_id;
	while (r_id >= l_id ) {
		int id = (l_id + r_id) /2;
		if (v[id] > val) {
			r_id = id - 1;
		} else if(v[id] < val) {
			l_id = id + 1;
		} else {
			return id;
		}
	}
}
