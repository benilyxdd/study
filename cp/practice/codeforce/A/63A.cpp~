#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)101;
map<string, vector<string>> m;
int n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a, b;
		cin >> a >> b;
		if (b == "child")
			b = "woman";
		m[b].push_back(a);
	}

	for (string& st : m["rat"]) {
		cout << st << "\n";
	}
	for (string& st : m["woman"]) {
		cout << st << "\n";
	}
	for (string& st : m["man"]) {
		cout << st << "\n";
	}
	for (string& st : m["captain"]) {
		cout << st << "\n";
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


