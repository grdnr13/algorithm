#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n;
float arr[25];

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	float ans = (arr[0] + arr[1]) / 2;
	for (int i = 2; i < n; i++) {
		ans = (ans + arr[i]) / 2;
	}
	printf("%.6f", ans);
}
