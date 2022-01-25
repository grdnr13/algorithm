#include<iostream>
using namespace std;
int n;
int dp[202][202];
string w1, w2, w3;

void init() {
	for (int i = 0; i < 202; i++) {
		for (int j = 0; j < 202; j++)
			dp[i][j] = -1;
	}
}

int main() {
	cin >> n;
	for(int i=1;i<=n;i++) {
		bool ans = false;

		cin >> w1 >> w2 >> w3;
		int len3 = w3.length();

		init();

		if (w1[0] == w3[0])dp[1][0] = 0;
		if (w2[0] == w3[0])dp[0][1] = 0;


		for (int idx = 1; idx < len3; idx++) {
			for (int lidx = 0; lidx <= idx; lidx++) {
				if (lidx > w1.length() || idx - lidx > w2.length()) continue;

				if (dp[lidx][idx-lidx] == idx-1) {
					if (w1[lidx] == w3[idx])
						dp[lidx + 1][idx - lidx] = idx;
					if (w2[idx-lidx] == w3[idx])
						dp[lidx][idx - lidx + 1] = idx;
				}			
			}
		}

		for (int i = 0; i <= len3-1; i++) {
			if (i > w1.length() || len3 - i > w2.length()) continue;
			if (dp[i][len3 - i] == len3-1) {
				ans = true; break;
			}
		}

		cout << "Data set " << i << ": ";
		if (ans) cout << "yes\n";
		else cout << "no\n";
	}

}
