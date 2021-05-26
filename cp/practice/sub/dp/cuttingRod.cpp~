#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 100;
int ar[mxN], mem[mxN], n;

int f(int k) {
	if (k <= 0) 
		return 0;
	if (mem[k] != -1)
		return mem[k];

	int mx = 0;
	for (int i = 0; i < n; i++)
		if (k-i > 0) 
			mx = max(mx, ar[i]+f(k-i-1));

	return mem[k] = mx;
}

void solve() {
	memset(mem, -1, sizeof(mem));
	
	int k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];
	
	cout << f(k);
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

