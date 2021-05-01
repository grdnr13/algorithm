#include<iostream>
using namespace std;

long long pibo[85];
int N;

int main() {
	pibo[1] = 1;
	pibo[2] = 1;
	cin >> N;

	for (int i = 3; i <= N; i++) {
		pibo[i] = pibo[i - 1] + pibo[i - 2];
	}

	cout << pibo[N] * 4 + pibo[N - 1] * 2;
}
