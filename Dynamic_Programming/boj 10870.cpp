#include<iostream>
using namespace std;
int pibo[21];
int n;

int main() {
	pibo[0] = 0;
	pibo[1] = 1;
	cin >> n;
	if (n == 0) cout << pibo[0];
	else if (n == 1) cout << pibo[1];
	else {
		for (int i = 2; i <= n; i++) {
			pibo[i] = pibo[i - 1] + pibo[i - 2];
		}
		cout << pibo[n];
	}
}
