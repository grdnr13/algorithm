#include<iostream>
#include<vector>
using namespace std;

int Tri[50];

void Triangular() {
	for (int i = 1; i < 45; i++) {
		Tri[i] = (i + 1) * i / 2;
	}//삼각수 구해줌
}

int find(int n) {
	for (int i = 1; Tri[i] < n; i++) {
		for (int j = 1; Tri[i] + Tri[j] < n; j++) {
			for (int k = 1; Tri[i] + Tri[j] + Tri[k] <= n; k++) {
				if (Tri[i] + Tri[j] + Tri[k] == n)
					return 1;
			}
		}
	}
	return 0;
}

int main() {
	
	Triangular();
	int t, ans=0;
	cin >> t;
	vector <int> Key(t+1);

	for (int i = 1; i <= t; i++) {
		cin >> Key[i];
		cout << find(Key[i]) << '\n';
	}

}
