#include<iostream>
#include<queue>
using namespace std;

int n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> pq;
	while (n--) {
		int num;
		cin >> num;
		if (num == 0) {
			if (pq.empty()) {
				cout << "0\n";
			}
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
			
		}
		else {
			pq.push(num);
		}
	}
}
