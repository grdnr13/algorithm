#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string A, B;
int main() {
	cin >> A >> B;
	int ans = 55;

	for (int i = 0; i <= B.length() - A.length(); i++) {
		int cnt = 0;
		for (int j = 0; j < A.length(); j++) {
			if (A[j] != B[j+i]) cnt++;
		}
		ans = min(ans, cnt);
	}
	cout << ans;

}
