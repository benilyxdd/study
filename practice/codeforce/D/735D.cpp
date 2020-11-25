#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAX = (int)2e9+9;
bool prime[MAX+1];
vector<int> v;

void sieve() {
	prime[1] = prime[0] = true;
	for (int i = 2; i*i <= MAX; i++) {
		if (prime[i] == false) {
			for (int j = i*i; j <= MAX; j+=i) {
				prime[j] = true;
			}
		}
	}
	for (int i = 2; i <= MAX; i++) {
		if (prime[i] == false) {
			v.push_back(i);
		}
	}
}

void solve() {
	int n; cin >> n;
	for (int& x : v) {
		cout << x << " ";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	sieve();
	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}


