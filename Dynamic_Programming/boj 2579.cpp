#include<iostream>
#include<algorithm>
using namespace std;

// 0: 앞계단 안밟음(1연), 1: 앞계단 밟음(2연)
int dp[305][2];

int main() {
	int n;
	cin >> n;
	
	cin >> dp[1][0];
	dp[1][1] = dp[1][0];

	cin >> dp[2][0];
	dp[2][1] = dp[1][0] + dp[2][0];
	for (int i = 3; i <= n; i++) {
		int num; cin >> num;
		dp[i][0] = max(dp[i - 2][0], dp[i - 2][1]) + num;
		dp[i][1] = dp[i - 1][0] + num;
	}
	cout << max(dp[n][0], dp[n][1]);
}
