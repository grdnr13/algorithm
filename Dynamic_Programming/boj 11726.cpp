#include<iostream>
#define M 10007
using namespace std;
int n;
int dp[1005];

int main() {
	cin >> n;
	dp[0] = 0;	dp[1] = 1; dp[2] = 2;
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 2] + dp[i - 1]) % M;
	}
	cout << dp[n] % M;
}
