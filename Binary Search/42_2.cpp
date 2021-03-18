#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n, m,lt,rt,idx;

int main() {
	cin >> n >> m;
	vector<int> a(n);
	//vector<int> a;
	for (int i = 0; i < n; i++) cin >> a[i];
	/*int tmp;
	* cin >> tmp;
	* a.push_back(tmp); //a[0]부터 차례대로 추가됨
	*/
	sort(a.begin(), a.end()); //cout << *(a.begin()-1);
	rt = n - 1;
	while (lt <= rt) {
		idx = (lt + rt) / 2;
		if (a[idx] == m) {
			cout << idx + 1; return 0;
		}
		else if (a[idx] > m) rt = idx - 1;
		else if (a[idx] < m) lt = idx + 1;
	}
	return 0;
}
