#include<iostream>

using namespace std;
int n, k, cnt = 0;
int val[11];
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)cin >> val[i];
	while (k > 0) {
		for (int i = n - 1; i >= 0; i--) {
			if (k >= val[i]) {
				cnt += k / val[i];
				k %= val[i];
			}
		}
	}
	cout << cnt;
}
