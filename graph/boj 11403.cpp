#include<iostream>
using namespace std;

int n, arr[101][101];
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> ans[i][j];
		}
	}
	//k 경유
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (ans[i][k] && ans[k][j]) ans[i][j] = 1;
			}
		}
	}
    //출력
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << ans[i][j] << ' ';
		}
		cout << '\n';
	}
}
