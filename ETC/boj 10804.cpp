#include<iostream>

using namespace std;
int arr[21];

void swap(int n, int m) {
	int temp = arr[n];
	arr[n] = arr[m];
	arr[m] = temp;
}

int main() {
	for (int i = 1; i <= 20; i++)arr[i] = i;
	int num = 10;
	while (num--) {
		int a, b;
		cin >> a >> b;
		for (int i = 0; i < (b - a + 1) / 2; i++) {
			swap(a + i, b - i);
		}
	}
	for (int i = 1; i <= 20; i++)cout << arr[i] << " ";
}
