#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string str;
int main() {
	cin >> str;
	vector<string> suffix;
	int len = str.length();
	for (int i = 0; i < len; i++) {
		string s = str.substr(i, len);
		suffix.push_back(s);
	}
	sort(suffix.begin(), suffix.end());
	for (int i = 0; i < len; i++) cout << suffix[i] << '\n';

}
