#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int a = s[0] - '0';
	int b = s[1] - '0';
	int c = s[2] - '0';
	int d = s[3] - '0';
	if (a+b+c+d == 7) cout << a << "+" << b << "+" << c << "+" << d << "=7";	
	else if (a+b+c-d == 7) cout << a << "+" << b << "+" << c << "-" << d << "=7";
	else if (a+b-c-d == 7) cout << a << "+" << b << "-" << c << "-" << d << "=7";
	else if (a-b-c-d == 7) cout << a << "-" << b << "-" << c << "-" << d << "=7";
	else if (a+b-c+d == 7) cout << a << "+" << b << "-" << c << "+" << d << "=7";
	else if (a-b-c+d == 7) cout << a << "-" << b << "-" << c << "+" << d << "=7";
	else if (a-b+c+d == 7) cout << a << "-" << b << "+" << c << "+" << d << "=7";
	else if (a-b+c-d == 7) cout << a << "-" << b << "+" << c << "-" << d << "=7";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

