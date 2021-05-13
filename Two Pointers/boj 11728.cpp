#include<iostream>
using namespace std;
int n, m, arrA[1000001], num;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arrA[i];
	int idx = 0;
	for (int i = 0; i < m; i++) {
		cin >> num;
		
		while (arrA[idx] < num && idx < n) {
			cout << arrA[idx] << ' ';
			idx++;
		}
		cout<< num<< ' ';
	}
	for (; idx < n; idx++) {
		cout<< arrA[idx]<<' ';
	}

}
