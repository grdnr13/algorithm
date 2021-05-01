#include<iostream>
using namespace std;

int arr[50][2];
//arr[i][0]:number of A, arr[i][1]: number of B
int k;
int main() {
	arr[0][0] = 1;
	arr[0][1] = 0;
	cin >> k;
	for (int i = 1; i <= k; i++) {
		arr[i][0] = arr[i-1][1];
		arr[i][1] = arr[i - 1][0] + arr[i - 1][1];
	}
	cout << arr[k][0] << " " << arr[k][1];
}
