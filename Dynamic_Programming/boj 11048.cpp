#include<iostream>
#include<algorithm>
using namespace std;

int n, m;
int maze[1001][1001];
long long dp[1001][1001];

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> maze[i][j];
		}
	}
	dp[1][1] = maze[1][1];
	for (int i = 2; i <= n; i++) dp[i][1] = dp[i - 1][1] + maze[i][1];
	for (int j = 2; j <= m; j++) dp[1][j] = dp[1][j - 1] + maze[1][j];
	for (int i = 2; i <= n; i++) {
		for (int j = 2; j <= m; j++) {
			dp[i][j] = max(dp[i - 1][j] + maze[i][j], dp[i][j - 1] + maze[i][j]);
			dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + maze[i][j]);
		}
	}
	cout << dp[n][m];
}
