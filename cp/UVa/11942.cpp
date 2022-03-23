#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int ar[10];
	for (int i = 0; i < 10; i++)
		cin >> ar[i];

	if (is_sorted(ar, ar+10)) {
		cout << "Ordered\n";
	} else {
		reverse(ar, ar+10);
		if (is_sorted(ar, ar+10)) {
			cout << "Ordered\n";
		} else {
			cout << "Unordered\n";
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cout << "Lumberjacks:\n";
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}


