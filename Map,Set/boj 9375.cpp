#include<iostream>
#include<string>
#include<map>
using namespace std;
int t;
typedef map <string, int> msi;

int main() {
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		msi m;
		for (int i = 0; i < n; i++) {
			string name, type;
			cin >> name >> type;
			if (m.find(type) == m.end()) {
				m.insert({ type, 1 });
			}
			else {
				m[type]++;
			}
		}
		int res = 1;
		for (auto keys : m) {
			res *= keys.second + 1;
		}
		cout << res - 1 << '\n';
	}
}
