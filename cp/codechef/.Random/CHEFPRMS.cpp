#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAX = 201;
bool d[MAX];
int prime[MAX+1];
vector<int> pls;

void p() {
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i <= MAX; i++) {
		if (prime[i]) {
			for (int j = i*i; j <= MAX; j+=i) {
				prime[j] = false;
			}
		}
	}
}

void pf() {
	for (int i = 0; i < MAX; i++) {
		if (prime[i]) {
			pls.push_back(i);
		}
	}
}

void a() {
	d[0] = false;
	int len = pls.size();
	for (int i = 0; i < len; i++) {
		for (int j = i; j < len; j++) {

		}
	}
}

void solve() {
	int n;
	cin >> n;
	cout << (d[n] ? "YES" : "NO") << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	memset(prime, true, sizeof(prime));
	p();
	pf();
	a();
	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

