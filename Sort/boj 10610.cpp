#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

string n;
vector<int> v;
long long sum = 0;

int main() {
	cin >> n;
	
	for (int i = 0; i < n.length(); i++) {
		sum += n[i] - '0';
		v.push_back(n[i] - '0'); 
	}
	sort(v.begin(), v.end());
	if (v[0] != 0 || sum % 3 !=0) {
		cout << -1;
		return 0;
	}
	for (int i = v.size()-1; i >= 0; i--) cout << v[i];
}
