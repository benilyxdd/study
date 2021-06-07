#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> getPrime(int n) {
	vector<bool> ar(n, true);
	vector<int> prime;
	ar[0] = ar[1] = false;
	for (int i = 2; i * i < n; i++) {
		if (ar[i]) {
			for (int j = i * i; j < n; j += i) {
				ar[j] = false;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (ar[i] && i % 10 == 1) {
			prime.push_back(i);
		}
	}
	return prime;
}

void solve() {
	vector<int> prime = getPrime(55556);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << prime[i] << ' ';
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

