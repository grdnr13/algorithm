#include<iostream>
#include<stack>

using namespace std;
stack<char>s;

int main() {
	char a[50];
	cin >> a;

	int flag = 1;
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == '(') {
			s.push(a[i]);
		}
		else {
			if (s.empty()) {
				cout << 'NO';
				flag = 0;
			}
			else s.pop();
		}
	}
	if (s.empty() && flag == 1) cout << 'YES';
	else if(s.empty() && flag == 1) cout << 'NO';
}
