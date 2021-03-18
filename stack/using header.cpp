#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	stack<int> s;
	char str[20] = "0123456789ABCDEF";
	while (n > 0) {
		s.push(n % k);
		n = n / k;
	}
	while (!s.empty()) {
		cout << str[s.top()];
		s.pop();
	}
}
