#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int ar[mxN], n, m;
vector<int> edges[mxN];

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];
	for (int i = 0; i < n-1; i++) {
		int a, b;
		cin >> a >> b;
		if (a > b) {
			swap(a, b);
		}
		edges[a].push_back(b);
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

