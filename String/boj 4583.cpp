#include<iostream>
#include<string>
using namespace std;
string str;
char mirror(char c) {
	if (c == 'b') return 'd';
	else if (c == 'd') return 'b';
	else if (c == 'p') return 'q';
	else if (c == 'q') return 'p';
	else if (c == 'i') return 'i';
	else if (c == 'o') return 'o';
	else if (c == 'v') return 'v';
	else if (c == 'w') return 'w';
	else if (c == 'x') return 'x';
	else return NULL;
}

int main() {
	
	while (1) {
		cin >> str;
		if (str == "#")break;

		string ans;
		ans.resize(str.length());
		bool is_mirror = true;

		for (int i = 0; i < str.length(); i++) {
			char res = mirror(str[i]);
			if (res == NULL) {
				cout << "INVALID"<<'\n';
				is_mirror = false;
				break;
			}
			else ans[str.length() - i-1] = res;
		}
		if (is_mirror)cout << ans<<"\n";
	}
}
