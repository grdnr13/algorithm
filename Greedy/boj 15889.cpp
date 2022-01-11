#include<iostream>
#include<algorithm>
using namespace std;
int pos[30003], dist[30003];
bool visited[30003];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> pos[i];
	if (n == 1) {
		cout << "권병장님, 중대장님이 찾으십니다";
		return 0;
	}
	for (int i = 0; i < n - 1; i++) {
		cin >> dist[i];

		int next = dist[i] + pos[i];
		int idx = i+1;
		if (next < pos[idx] && !visited[idx]) {
			cout << "엄마 나 전역 늦어질 것 같아";
			return 0;
		}
		while (next >= pos[idx]) {
			visited[idx] = true;
			idx++;
		}
	}

	if (visited[n - 1]) cout << "권병장님, 중대장님이 찾으십니다";
	else cout << "엄마 나 전역 늦어질 것 같아";

}
