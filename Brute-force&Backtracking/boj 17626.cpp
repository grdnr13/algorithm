#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;
	cin >> n;
	vector <int> dp(n+1, 4);
	dp[0] = 0;

	for (int j = 1; j <= n; j++) {
		for (int i = 1; i * i <= j; i++) {
			dp[j] = min(dp[j], dp[j - i * i] + 1);
		}
		//cout << dp[j] << '\n';
	}
	cout << dp[n];
}
