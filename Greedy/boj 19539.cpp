#include<iostream>
using namespace std;
int n, h[100001], sum = 0, odd = 0;

int solve() {
	if (sum % 3) return 0;
	int q = sum / 3;
	if (odd > q) return 0;
	return 1;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> h[i]; sum += h[i];
		if (h[i] % 2) odd++;
	}
	if (solve()) cout << "YES";
	else cout << "NO";
}
