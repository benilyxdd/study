#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e6+6;
bool si[mxN];
vector<int> p;
int pre[mxN];
/*
void f2() {

}
*/
void f() {
	si[0] = si[1] = 1;
	for (int i = 2; i*i < mxN; i++) {
		if (!si[i]) {
			for (int j = i*i; j < mxN; j+=i) {
				si[j] = 1;
			}
		}
	}
	for (int i = 0; i < mxN; i++) {
		if (!si[i]) {
			p.push_back(i);
		}
	}
}

void solve() {
	int n = 1000000;
	if (pre[n] != -1) {
		return;
	}
	int cnt = 0;
	for (int& x : p) {
		if (x > n)
			break;
		for (int& y : p) {
			if (y > n)
				break;
			if (!si[x+y] && x+y <= n) {
				//cout << x << " " << y << "\n";
				cnt++;
			}
		}
	}
	cnt = pre[n];
	//cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	f();
	memset(pre, -1, sizeof(pre));
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

