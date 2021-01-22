#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)3e4;
bool ar[mxN];
vector<int> prime;
int n;

void f() {
	ar[0] = true;
	ar[1] = true;
	for (int i = 2; i*i <= mxN; i++) {
		if (!ar[i]) {
			for (int j = i*i; j <= mxN; j += i) {
				ar[j] = true;
			}
		}
	}

	for (int i = 0; i < mxN; i++) {
		if (!ar[i]) {
			prime.push_back(i);
		}
	}
}


void solve() {
	cin >> n;
	bool ok = false;
	int f, l;
	for (int i = 0; i < prime.size(); i++) {
		if (prime[i]-1 >= n && !ok) {
			f = prime[i];
			ok = 1;
		}
		if (ok) {
			if (prime[i]-f >= n) {
				l = prime[i];
				break;
			}
		}
	}

	//	cout << f << " " << l << "\n";
	cout << f*l << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	f();
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

