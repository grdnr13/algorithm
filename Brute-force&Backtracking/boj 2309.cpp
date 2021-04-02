#include<iostream>
#include<algorithm>
using namespace std;
int arr[10];
int sum = 0, fake1, fake2;
int main() {
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr + 9);

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - arr[i] - arr[j] == 100) {
				fake1 = i; fake2 = j;
				break;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		if (i == fake1 || i == fake2) continue;
		cout << arr[i] << '\n';
	}
}
