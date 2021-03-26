#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	int num0 = 0, num1 = 0;
	cin >> str;

	str[0] == '0' ? num0++ : num1++;

	for (int i = 1; i < str.size(); i++) {
		if (str[i] != str[i - 1]) {
			str[i] == '0' ? num0++ : num1++;
		}
	}
	cout << min(num0, num1);
}
