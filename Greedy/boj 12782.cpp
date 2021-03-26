#include<iostream>
#include<algorithm>

using namespace std;
int t;
char num1[1000005], num2[1000005];
int main() {
	cin >> t;
	while (t--) {
		cin >> num1 >> num2;
		int change_one = 0, change_zero = 0;
		for (int i = 0; num1[i] != '\0'; i++) {
			if (num1[i] != num2[i]) {
				num1[i] == '0' ? change_zero++ : change_one++;
			}
		}
		cout << max(change_zero, change_one) << '\n';
	}
}
