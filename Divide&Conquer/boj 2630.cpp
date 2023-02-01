#include<iostream>

using namespace std;
int graph[129][129];
int white = 0, blue = 0;

void ckeckSq(int r, int c, int n) {
	int color = graph[r][c];
	bool isSq = true;
	for (int i = r; i < r+n; i++) {
		for (int j = c; j < c + n; j++) {
			if (graph[i][j] != color) {
				isSq = false;
				break;
			}
		}
		if (!isSq)break;
	}
	if (isSq) {
		if (color == 0) {
			white++;
		}
		if (color == 1) {
			blue++;
		}
		return;
	}
	ckeckSq(r, c, n / 2);
	ckeckSq(r, c + n / 2, n / 2);
	ckeckSq(r + n / 2, c, n / 2);
	ckeckSq(r + n / 2, c + n / 2, n / 2);
}

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> graph[i][j];
		}
	}
	ckeckSq(0, 0, N);

	cout << white<<'\n'<<blue;
}
