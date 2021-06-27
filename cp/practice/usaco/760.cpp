#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	vector<string> str(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}

	vector<int> how(n);
	for (int i = 0; i < n; i++) {
		how[ar[i] - 1] = i;
	}

	for (int i = 0; i < 3; i++) {
		vector<string> temp(n);
		for (int j = 0; j < n; j++) {
			temp[how[j]] = str[j];
		}
		str = temp;
	}

	for (string &st : str) {
		cout << st << '\n';
	}
}

int main() {
	freopen("shuffle.in", "r", stdin);
	freopen("shuffle.out", "w", stdout);
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

