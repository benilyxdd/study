#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 31;
int ar[mxN], n, k;
bool ped[mxN*mxN];

void solve() {
	cin >> n >> k;
	for (int i = 0; i < k; i++) 
		cin >> ar[i];

	vector<int> x[k];
	for (int i = 0; i < k; i++) {
		x[i].push_back(ar[i]);
		ped[ar[i]] = 1;
	}
	
	for (int i = 0; i < k; i++) {
		int z = 1;
		for (int j = 1; j <= n*k && z < n; j++) {
			if (!ped[j]) {
				x[i].push_back(j);
				ped[j] = 1;
				z++;
			}
		}
	}


	for (vector<int>& y : x) {
		for (int& z : y) {
			cout << z << " ";
		}
		cout << "\n";
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


