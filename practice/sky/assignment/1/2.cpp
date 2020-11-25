#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	vector<string> v;
	for (int i = 0; i < 4; i++) {
		string a;
		cin >> a;
		reverse(a.begin(), a.end());
		v.push_back(a);
	}
	vector<int> v1;
	for (string a : v) {
		v1.push_back(stoi(a));
	}
	sort(v1.begin(), v1.end());
	cout << "Smallest: " << v1[0] << "\n";
	cout << "Largest: " << v1[3] << "\n";
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

