#include<iostream>
#include<algorithm>
using namespace std;
int n, m, arr[1000005];

int findM(int lt, int rt, int key) {
	while (lt <= rt) {
		int idx = (lt + rt) / 2;
		if (arr[idx] == key) return idx+1;
		else if (arr[idx] > key) return findM(lt, idx - 1, key);
		else if (arr[idx] < key) return findM(idx + 1, rt, key);
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	cout << findM(0, n-1, m);
} 
