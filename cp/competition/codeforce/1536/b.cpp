#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<string>& test) {
	int n, x = test.size();
	string s;
	cin >> n >> s;

	for (int i = 0; i < x; i++) {
		string temp = test[i];
		if (s.find(temp) == string::npos) {
			cout << temp << '\n';
			return;
		}
	}
}

vector<string> getTest() {
	vector<string> test;
	for (int i = 0; i < 26; i++) {
		string x = "";
		x += char(i + 'a');
		test.push_back(x);
	}

	for (int i = 0; i < 26; i++) {
		string x = test[i];
		for (int j = 0; j < 26; j++) {
			x += char(j + 'a');
			test.push_back(x);
			x = test[i];
		}
	}

	for (int i = 0; i < 13; i++) {
		string x = test[26 + i];
		for (int j = 0; j < 26; j++) {
			x += char(j + 'a');
			test.push_back(x);
			x = test[26 + i];
		}
	}

	// int cnt = 0;
	// for (string &st : test) {
	// 	cnt += st.length();
	// 	cout << st << ' ';
	// }
	// cout << cnt << '\n';
	return test;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	vector<string> test = getTest();
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve(test);
		//i++;
	}
	return 0;
}

