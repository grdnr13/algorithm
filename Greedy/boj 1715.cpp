#include<iostream>
#include<queue>
#include<functional>
using namespace std;
int n, ans = 0;

int main() {
	priority_queue<int, vector<int>, greater<int>> pq;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		pq.push(num);
	}
	while (pq.size()>1) {
		int tmp = pq.top(); pq.pop();
		tmp += pq.top(); pq.pop();
		ans += tmp;
		pq.push(tmp);
	}
	cout << ans;
}
