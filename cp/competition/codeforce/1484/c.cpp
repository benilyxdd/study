#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int cnt[mxN];

bool cmp(int& a, int& b) {
	return cnt[a] > cnt[b];
}

void solve() {
	int n, m;
	cin >> n >> m;
	memset(cnt,	0, sizeof(cnt));
	vector<int> ar[m];
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		for (int j = 0; j < a; j++) {
			int b;
			cin >> b;
			ar[i].push_back(b);
			cnt[b]++;
		}
	}

	priority_queue<int, vector<int>, decltype(&cmp)> pq(&cmp);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < ar[i].size(); j++) {
			//pq[i].push(ar[j]);
		}
	}

	int cnt2[n+1];
	memset(cnt2, 0, sizeof(cnt2));
	for (int i = 0; i < m; i++) {
		if (ar[i].size() == 1) {
			cnt2[ar[i][0]]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		if ((m+2-1)/2 < cnt2[i]) {
			cout << "NO\n";
			return;
		}
	}

	cout << "YES\n";
	for (int i = 0; i < m; i++) {
		
	}

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

