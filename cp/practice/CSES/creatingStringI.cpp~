#include <bits/stdc++.h>
using namespace std;

#define ll long long

//int a[26];

/*
int fact(int x) {
	int ans = 1;
	for (int i = 2; i <= x; i++) {
		ans *= i;
	}
	return ans;
}
*/

void solve() {
	string s; cin >> s;
	/*
	for (char& c : s) {
		a[c-'a']++;
	}

	int x = s.length();
	int total = fact(x);
	for (int i = 0; i < 26; i++) {
		if (a[i] > 1) {
			total /= fact(a[i]);
		}
	}
	cout << total << "\n";
	*/
	sort(s.begin(), s.end());
	vector<string> v;
	do {
		v.push_back(s);
	} while(next_permutation(s.begin(), s.end()));
	cout << v.size() << "\n";
	for (string& a : v) {
		cout << a << "\n";
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

