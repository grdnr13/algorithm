#include<iostream>
using namespace std;
long long dp[1516][3], n;
const int mod = 1000000007; //dp[n][r]은 n자리수에서 %3한 나머지가 r인거 갯수, 5는 기본으로 가정
int main() {
    dp[1][0] = 0, dp[1][1] = 0, dp[1][2] = 1;
    //dp[2][0] = 1, dp[2][1] = 1, dp[2][2] = 0; //n=2
    cin >> n;
    if (n > 1) {
        for (int i = 2; i <= n; i++) {
            dp[i][0] = (dp[i - 1][1] + dp[i - 1][2])%mod;
            dp[i][1] = (dp[i - 1][0] + dp[i - 1][2])%mod;
            dp[i][2] = (dp[i - 1][0] + dp[i - 1][1])%mod;
        }
    }
    cout << dp[n][0];
}
