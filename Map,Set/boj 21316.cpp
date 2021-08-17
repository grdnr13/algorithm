#include<iostream>
#include<vector>
using namespace std;
int ans;

int main() {
	vector<int> v[15];
	
	int n = 12;
	while (n--) {
		int s, e;
		cin >> s >> e;
		v[s].push_back(e);
		v[e].push_back(s);
	}

	for (int i = 1; i <= 12; i++) {
		bool t1 = false, t2 = false, t3 = false;

		if (v[i].size() == 3) {
			for (auto idx : v[i]) {
				if (v[idx].size() == 1) t1 = true;
				if (v[idx].size() == 2) t2 = true;
				if (v[idx].size() == 3) t3 = true;
			}
			if (t1 && t2 && t3) {
				cout << i;
				break;
			}
		}
	}
}
