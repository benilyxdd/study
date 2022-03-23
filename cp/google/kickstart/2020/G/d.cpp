#include <bits/stdc++.h>
using namespace std;

#define ll long long

int mx(vector<int> v) {
	priority_queue<int> pq;
	for (int i = 0; i < v.size(); i++) {
		pq.push(v[i]);
	}
	int re = 0;
	while(pq.size() > 1) {
		int f = pq.top();
		pq.pop();
		int s = pq.top();
		pq.pop();
		
		int xd = f+s;
		re += xd;
		pq.push(xd);
	}
	return re;
}

int mn(vector<int> v) {
	int re = 0;
	while(v.size() > 1) {
		sort(v.rbegin(), v.rend());
		int f = v[0];
		int s = v[1];
		v.erase(v.begin(), v.begin()+2);
		
		int xd = f+s;
		re += xd;
		v.push_back(xd);
	}
	return re;
}

void solve() {
	int a, n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	cout << fixed << setprecision(10) << double(mn(v)+mx(v))/2 << "\n";
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
