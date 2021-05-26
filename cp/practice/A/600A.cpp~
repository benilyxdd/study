#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool is_digits(const string &str) {
	return str.find_first_not_of("0123456789") == std::string::npos;
}

void solve() {
	string s, xd;
	cin >> s;
	vector<string> v;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ',' || s[i] == ';') {
			v.push_back(xd);
			if (i == s.length()-1) {
				string yo;
				v.push_back(yo);
			}
			xd.clear();
		} else {
			xd += s[i];
			if (i == s.length() -1) {
				v.push_back(xd);
			}
		}
	}
	string a = "\"", b = "\"";
	for (int i = 0; i < v.size(); i++) {
		if (is_digits(v[i]) && v[i][0] != '0' && !v[i].empty()
			   	|| is_digits(v[i]) && v[i].length() == 1 && !v[i].empty()) {
			a += v[i];
			a += ',';
		} else {
			b += v[i];
			b += ',';
		}
	}
	a.pop_back();
	b.pop_back();
	if (!a.empty()) {
		a += "\"";
	}
	if (!b.empty()) {
		b += "\"";
	}
	cout << (a.size() == 0 ? "-" : a) << "\n";
	cout << (b.size() == 0 ? "-" : b) << "\n";
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


