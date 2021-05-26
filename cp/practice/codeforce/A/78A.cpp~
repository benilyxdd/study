#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool ok(char a) {
	if (a == 'a' || a == 'e' || a == 'i' || a == 'u' || a == 'o') 
		return 1;
	return 0;
}

void solve() {
	string ar[3];
	for (int i = 0; i < 3; i++)
		getline(cin, ar[i]);

	int cnt[3];
	memset(cnt, 0, sizeof(cnt));
	for (int i = 0; i < 3; i++) {
		for (char& x : ar[i]) {
			cnt[i] += ok(x);
		}
	}

	//for (int& x : cnt) { cout << x << " "; }
	if (cnt[0] == 5 && cnt[1] == 7 && cnt[2] == 5) {
		cout << "YES";
	} else {
		cout << "NO";
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


