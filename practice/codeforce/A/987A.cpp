#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	map<string,string> m={{"purple","Power"},{"green","Time"}, {"blue","Space"},{"orange","Soul"},{"red","Reality",},{"yellow","Mind"}};
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		m.erase(s);
	}
	cout << 6-n << "\n";
	for (auto& x : m) {
		cout << x.second << "\n";
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


