#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int ar[n];
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	vector<int> left;
	for (int i = 0, j = n; i < n; i++) {
		if (ar[i] == j) {
			cout << j << " ";
			j--;
			sort(left.rbegin(), left.rend());
			for (auto it = left.begin(); it != left.end(); it++) {
				if (*it == j) {
					cout << j << " ";
					j--;
					left.erase(it);
				} else {
					break;
				}
			}
		} else {
			left.push_back(ar[i]);
		}
		cout << "\n";
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


