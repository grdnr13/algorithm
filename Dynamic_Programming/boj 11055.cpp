#include<iostream>
#include<algorithm>
using namespace std;
int n, input[1001], dp[1001];
int ans = 0;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)cin >> input[i];
	dp[0] = input[0];
	for (int i = 1; i < n; i++) {
		int inc_max = 0;
		for (int j = 0; j < i; j++) {
			if (input[i] > input[j])inc_max = max(inc_max, dp[j]);
		}
		dp[i] = input[i] + inc_max;
	}
	for (int i = 0; i < n; i++) {
		ans = max(ans, dp[i]);
	}
	cout << ans;
}
