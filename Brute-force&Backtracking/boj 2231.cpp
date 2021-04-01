#include<iostream>
using namespace std;

int n;

int main() {
	cin >> n;
	for (int i = 1; i < n; i++) {
		int sum = i;
		int tmp = i;
		while (tmp > 0) {
			sum += tmp % 10;
			tmp /= 10;
		}
		if (n == sum) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
}
