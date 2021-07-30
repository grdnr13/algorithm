#include<iostream>
#include<algorithm>
using namespace std;

int triangle[501][501], dp[501][501];
int n;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> triangle[i][j];
		}
	}
	dp[1][1] = triangle[1][1];
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i][j] = max(dp[i - 1][j] + triangle[i][j], dp[i - 1][j - 1] + triangle[i][j]);
		}
	}
	for (int j = 1; j <= n; j++)ans = max(ans, dp[n][j]);
	cout << ans;
}
