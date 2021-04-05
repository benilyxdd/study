#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, q, ans = 0;
	cin >> n >> q;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}
	
	int pos[n+1];
	pos[0] = 0;
	for (int i = 0; i < n; i++) {
		pos[ar[i]] = i;
	}

	for (int i = 0; i < n; i++) {
		if (pos[i] > pos[i+1]) {
			ans++;
		}
	}
	ans++;

	int x = ans;
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		
		if (a != n) {
			if (pos[a] > pos[a+1]) {
				ans--;
			}
		}
		if (pos[a-1] > pos[a]) {
			ans--;
		}
		
		if (b != n) {
			if (pos[b] > pos[b+1]) {
				ans--;
			}
		}
		if (pos[b-1] > pos[b]) {
			ans--;
		}

		if (a != n) {
			if (pos[b] > pos[a+1]) {
				ans++;
			}
		}	
		if (pos[a-1] > pos[b]) {
			ans++;
		}

		if (b != n) {
			if (pos[a] > pos[b+1]) {
				ans++;
			}
		}	
		if (pos[b-1] > pos[a]) {
			ans++;
		}

		cout << ans << '\n';
		swap(pos[a], pos[b]);
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

