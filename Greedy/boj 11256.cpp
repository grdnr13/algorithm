#include<iostream>
#include<algorithm>
using namespace std;

int t, j, n;
int box[1005];
int main() {
	cin >> t;

	while (t--) {
		cin >> j >> n;
		int a, b;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			box[i] = a * b;
		}
		sort(box, box + n);
		for (int i = n - 1; i >= 0; i--) {
			if (j >= box[i]) {
				j -= box[i];
				cnt++;
			}
			else if (j > 0) {
				cnt++;
				cout << cnt << '\n';
				break;
			}
			else{
				cout << cnt << '\n';
				break;
			}
		}
	}
}
