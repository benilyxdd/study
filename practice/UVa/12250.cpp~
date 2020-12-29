#include <bits/stdc++.h>
using namespace std;

#define ll long long

string f(string a) {
	if (a == "HELLO") 
		return "ENGLISH";
	else if (a == "HOLA")
		return "SPANISH";
	else if (a == "HALLO")
		return "GERMAN";
	else if (a == "BONJOUR")
		return "FRENCH";
	else if (a == "CIAO")
		return "ITALIAN";
	else if (a == "ZDRAVSTVUJTE")
		return "RUSSIAN";
	else 
		return "UNKNOWN";
}

void solve() {
	string s;
	int i = 1;
	while(cin >> s) {
		if (s == "#")
			return;
		cout << "Case " << i << ": ";
		cout << f(s) << "\n";
		i++;
	}
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


