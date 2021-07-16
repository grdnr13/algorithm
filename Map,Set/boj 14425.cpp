#include<iostream>
#include<map>
#include<string>
using namespace std;

int n, m, cnt=0;
map<string, int> given;

int main() {
	cin >> n >> m;
	string str;

	for(int i=1;i<=n;i++) {
		cin >> str;
		given.insert(make_pair(str, i));
	}
	while (m--) {
		cin >> str;
		if (given.find(str) != given.end()) {
			cnt++;
		}
	}
	cout << cnt;
}
