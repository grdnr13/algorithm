#include<iostream>
#include<algorithm>
using namespace std;

int n, m, inven;
int min_time = 2147000000, res_height;

int arr[250000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> n >> m >> inven;
	int size = n * m;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	for (int h = 256; h >= 0; h--) {
		int place = 0, remove = 0;
		for (int i = 0; i < size; i++) {
			if (arr[i] > h) remove += arr[i] - h;
			else place += h - arr[i];
		}
		if (remove + inven >= place) {
			int time = 2 * remove + place;
			if (min_time > time) {
				min_time = time;
				res_height = h;
			}
		}
	}
	cout << min_time << ' ' << res_height;
}
