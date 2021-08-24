#include<iostream>
#include<algorithm>
using namespace std;
int wand[101], box[101], n;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)cin >> wand[i];
	for (int i = 0; i < n; i++) cin >> box[i];

	sort(wand, wand+n);
	sort(box, box+n);

	for (int i = n - 1; i >= 0; i--) {
		if (box[i] < wand[i]) {
			cout << "NE";
			return 0;
		}
	}
	cout << "DA";
}
