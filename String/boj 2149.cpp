#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string key, code, original;

int main() {
	cin >> key >> code;
	original = code;
	vector<pair<char, int>> keys;

	int len = code.size() / key.size();

	for (int i = 0; i < key.size(); i++) {
		keys.push_back(make_pair(key[i],i));
	}
	sort(keys.begin(), keys.end());

	vector<vector<char>>ans(key.size());

	for (int i = 0; i < key.size(); i++) {
		int idx = keys[i % key.size()].second;
		for (int j = 0; j < len; j++) {
			ans[idx].push_back(code[i * len + j]);
		}
	}

	for (int i = 0; i < ans[0].size(); i++) {
		for(int j=0;j<ans.size();j++)
		cout<< ans[j][i];
	}
}
