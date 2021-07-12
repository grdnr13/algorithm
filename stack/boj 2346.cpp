#include<iostream>
#include<deque>
using namespace std;

int main() {
	int n;
	cin >> n;
    
	deque<int> d;
	int arr[1005] = { 0 };

	for (int i = 2; i <= n; i++) d.push_back(i);
	for (int i = 1; i <= n; i++) cin >> arr[i];

	cout << "1 ";
	int cnt = arr[1];
	while (!d.empty()) {
		if (cnt > 0) {
			cnt--;
			while (cnt--) {
				d.push_back(d.front());
				d.pop_front();
			}
			cnt = arr[d.front()];
			cout << d.front() << " ";
			d.pop_front();
		}
		else {
			cnt = -1-cnt;
			while (cnt--) {
				d.push_front(d.back());
				d.pop_back();
			}
			cnt = arr[d.back()];
			cout << d.back() << " ";
			d.pop_back();
		}
	}
}
