#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	n++;
	while(n--) {
		string s;
		getline(cin , s);
		for (char& x : s) {
			x = tolower(x);
		}	
		int len = s.length();
		bool to = true;
		for (int i = len-1; i >= 0; i--) {
			if (s[i] == ' ' && to && i == len-1) {
				while(s[i] == ' ') {
					i--;
				}
				to = false;
			} else {
				cout << s[i];
			}
		}
		cout << "\n";
	}
}
