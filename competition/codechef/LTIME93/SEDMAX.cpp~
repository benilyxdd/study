#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int ar[mxN], n;

void solve() {
	set<int> ans;
	stack<int> s, s2;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	
	for (int i = 0; i < n; i++) {
		while (!s.empty() && s.top() <= ar[i]) {
			ans.insert(ar[i]-s.top());
			s.pop();
		}
		s.push(ar[i]);
	}
	reverse(ar, ar+n);
	for (int i = 0; i < n; i++) {
		while (!s2.empty() && s2.top() <= ar[i]) {
			ans.insert(ar[i]-s2.top());
			s2.pop();
		}
		s2.push(ar[i]);
	}
	cout << ans.size() << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

