#include <bits/stdc++.h>
using namespace std;

#define ll long long
bool a[101];
vector<int> v;

void prime() {
	a[0] = true;
	a[1] = true;
	for (int i = 2; i*i <= 50; i++) {
		if (!a[i]) {
			for (int j = i*i; j <= 50; j+=i) {
				a[j] = true;
			}
		}
	}

	for (int i = 0; i <= 50; i++)
		if (!a[i])
			v.push_back(i);

	for (int i = 2; i <= 8; i++) {
		if (!a[i]) {
			v.push_back(i*i);
		}
	}
}

void solve() {
	prime();
	
	int ans = 0, i = 0;
	string s;
	for (int& x : v) {
		cout << x << "\n";
		cin >> s;
		if (s == "yes")
			ans++;
		i++;
		if (i > 19 || ans > 1)
			break;
	}
	cout << (ans >= 2 ? "composite" : "prime") << "\n";
	fflush(stdout);
	return;
}

int main() {
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}


