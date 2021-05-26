#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	string ans = to_string(a+b);
	string a1 = to_string(a);
	string b1 = to_string(b);
	string a2, b2;
	for(int i = 0; i < a1.length(); i++) {
		if (a1[i] != '0') {
			a2 += a1[i];
		}
	}
	for (int i = 0; i < b1.length(); i++) {
		if (b1[i] != '0') {
			b2 += b1[i];
		}
	}

	string ans2;
	for (int i = 0; i < ans.length(); i++) {
		if (ans[i] != '0') {
			ans2 += ans[i];
		}
	}

	int ans3 = stoi(b2) + stoi(a2);
	if (ans2 == to_string(ans3)) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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


