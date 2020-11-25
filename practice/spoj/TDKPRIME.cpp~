#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MXA = 90000001;
bool prime[MXA];
vector<int> pri;

void pre() {
	prime[0] = true;
	prime[1] = true;
	for (int i = 2; i*i <= MXA; i++) {
		if (!prime[i]) {
			for (int j = i*i; j <= MXA; j+=i) {
				prime[j] = true;
			}
		}
	}
	for (int i = 2; i <= MXA; i++) {
		if (!prime[i]) {
			pri.push_back(i);
		}
	}
}

void solve() {
	int n; cin >> n;
	cout << pri[n-1] << "\n";	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	pre();
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

