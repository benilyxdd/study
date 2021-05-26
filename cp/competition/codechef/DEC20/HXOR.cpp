#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int n, x;
vector<int> v;

void solve() {
	v.clear();
	//input
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		v.push_back(a);
	}
	
	//process;
	while(x--) {
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {

			}
		}
	}



	//print
	for (int& in : v) {
		cout << in << " ";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	memset(po, -1, sizeof(po));

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

