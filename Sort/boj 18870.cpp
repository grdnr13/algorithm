#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, res[1000000];
vector<pair<int, int>> v;
int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(make_pair(a, i));
	}
	sort(v.begin(), v.end());
	int cnt = 0;
	res[v[0].second] = cnt;
	for (int i = 1; i < n; i++) {
		if (v[i - 1].first < v[i].first) cnt++;
		res[v[i].second] = cnt;
	}
	for (int i = 0; i < n; i++)cout << res[i] << ' ';
}
