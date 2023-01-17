#include<iostream>
#include<vector>
#include<queue>

#define INF 9876543

using namespace std;

int n, k;

vector<int> fastest(100001, INF);
queue<int> visit;

bool checkValid (int idx) {
	if (idx >= 0 && idx <= 100000 && fastest[idx]==INF)return true;
	return false;
}

void update() {
	while (!visit.empty()) {
		int idx = visit.front();
		visit.pop();

		if (idx == k)break;

		if (checkValid(idx - 1)) {
			visit.push(idx - 1);
			fastest[idx - 1] = fastest[idx] + 1;
		}
		if (checkValid(idx + 1)) {
			visit.push(idx + 1);
			fastest[idx + 1] = fastest[idx] + 1;
		}
		if (checkValid(idx * 2)) {
			visit.push(idx * 2);
			fastest[idx * 2] = fastest[idx] + 1;
		}
	}
}

int main() {
	
	cin >> n >> k;

	fastest[n] = 0;

	visit.push(n);
	update();
	cout << fastest[k];
}
