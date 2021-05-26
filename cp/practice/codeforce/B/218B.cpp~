#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1001;
priority_queue<int> pq;
priority_queue<int, vector<int>, greater<int>> pq2;
int n, m;

void solve() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		pq.push(a);
		pq2.push(a);
	}

	int mx = 0, mn = 0;
	for (int i = 0; i < n; i++) {
		int top = pq.top();
		pq.pop();
		mx += top;
		if (top-1 > 0) {
			pq.push(top-1);
		}
	}

	for (int i = 0; i < n; i++) {
		int top = pq2.top();
		pq2.pop();
		mn += top;
		if (top-1 > 0) {
			pq2.push(top-1);
		}
	}
	cout << mx << " " << mn;
}

void solve2() {
	cin >> n >> m;
	int ar[m], ar2[m];
	for (int i = 0; i < m; i++) {
		cin >> ar[i];
		ar2[i] = ar[i];
	}

	int mx = 0, mn = 0;
	for (int i = 0; i < n; i++) {
		sort(ar, ar+m);
		sort(ar2, ar2+m, greater<int>());
		for (int j = 0; j < m; j++) {
			if (ar[j] != 0) {
				mn += ar[j];
				ar[j]--;
				break;
			}
		}
		mx += ar2[0];
		ar2[0]--;
	}
	cout << mx << " " << mn;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//solve2();
		//i++;
	}
	return 0;
}

