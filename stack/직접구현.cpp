#include<iostream>
#include<vector>
using namespace std;
int stack[100], top = -1;
int n, k;

void push(int x) {
	stack[++top] = x;
}
int pop() {
	return stack[top--];
}

int main() {
	char str[20] = "0123456789ABCDEF";
	cin >> n >> k;
	
	vector<int>a;
	while (n > 0) {
		push(n % k);
		n = n / k;
	}
	while (top != -1) {
		cout << str[pop()];
	}
	return 0;
}
