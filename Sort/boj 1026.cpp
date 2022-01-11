#include<iostream>
#include<algorithm>
using namespace std;
int n, a[55], b[55];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)cin >> a[i];
	for (int i = 0; i < n; i++)cin >> b[i];
	sort(a, a + n);
	sort(b, b + n);
	int res = 0;
	for (int i = 0; i < n; i++)res += a[i] * b[n - 1 - i];
	cout << res;
}
