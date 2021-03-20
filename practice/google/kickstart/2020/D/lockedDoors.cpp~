#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
int ar[mxN], n, q, le[mxN], ri[mxN];

void debug() {
	cout << "Left: \n";
	for (int i = 0; i < n-1; i++) {
		cout << le[i] << ' ';
	}
	cout << "\nRight: \n";
	for (int i = 0; i < n-1; i++) {
		cout << ri[i] << ' ';
	}
	cout << '\n';
}

void door() {
	stack<int> st, st2;

	for (int i = 0; i < n-1; i++) {
		while(!st.empty() && ar[i] <= st.top()) {
			st.pop();
		}
		if (!st.empty()) {
			le[i] = st.top();
		} else {
			le[i] = -1;
		}
		st.push(ar[i]);
	}
	
	for (int i = n-2; i >= 0; i--) {
		while(!st2.empty() && ar[i] <= st2.top()) {
			st2.pop();
		}
		if (!st2.empty()) {
			ri[i] = st2.top();
		} else {
			ri[i] = -1;
		}
		st2.push(ar[i]);
	}
}

void solve() {
	cin >> n >> q;
	for (int i = 0; i < n-1; i++) {
		cin >> ar[i];
	}
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
	}

	door();
	cout << '\n';
	debug();
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
