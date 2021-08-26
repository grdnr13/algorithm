#include<iostream>
#include<stack>
using namespace std;

int n;
stack<int> s;

int main() {
	cin >> n;
	int cnt = 0;
	s.push(0);
    
	for(int i=0; i<n; i++){
		int a, b;
		cin >> a>>b;

		if (s.top() < b) {
			s.push(b);
		}
		else {
			while (s.top() > b) {
				cnt++;
				s.pop();
			}
			if(s.top()!=b)
				s.push(b);
		}	
	}
	while (!s.empty()) {
		cnt++;
		s.pop();
	}
	cout << cnt-1;
}
