#include<iostream>
using namespace std;
#define ll long long

int N, r, c;
ll ans = 0;
ll pow2[20] = { 1, };

int search(int num,int x, int y) {
	int nx, ny;
	if (x<pow2[num]) {
		if (y < pow2[num]) {
			//1
			nx = x;	ny = y;
		}
		else {
			//3
			ans += 2 * pow2[num] * pow2[num];
			nx = x; ny = y - pow2[num];
		}
	}
	else {
		if (y < pow2[num]) {
			//2
			ans += pow2[num] * pow2[num];
			nx = x - pow2[num]; ny = y;
		}
		else {
			//4
			ans += 3 * pow2[num] * pow2[num];
			nx = x - pow2[num]; ny = y - pow2[num];
		}
	}

	if (num == 0) return ans;
	else return search(num - 1, nx, ny);
}

int main() {
	cin >> N >> r >> c;
	//비교용 값
	for (int i = 1; i <= N; i++) {
		pow2[i] = pow2[i-1]*2;
	}

	search(N - 1, c, r);
	cout << ans;

}
