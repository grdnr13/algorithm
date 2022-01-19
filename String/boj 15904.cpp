#include<iostream>
#include<string>
using namespace std;
string str;
bool res = false;

int main() {
	getline(cin, str);

	string ucpc = "UCPC";
	int idx = 0;
	for (int i = 0; i < str.length();i++) {
		if (str[i] == ucpc[idx]) {
			idx++;
			if (idx == 4) break;
		}
	}
	if (idx == 4) cout << "I love UCPC";
	else cout << "I hate UCPC";
}
