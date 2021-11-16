#include<iostream>
#include<algorithm>
using namespace std;
int n, tree[100001];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> tree[i];
	sort(tree, tree + n);
	int max = -1;
	for (int i = 0; i < n; i++) {
		tree[i] = tree[i] + n - i + 1;
		if (max < tree[i])max = tree[i];
	}
	cout << max;
}
