#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, sum = 0;
	cin >> n;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
		sum += x;
	}
	int each = sum / 3;
	int ans = 0, z = 0;

	int temp = 0, j = -1;
	for (int i = 0; i < n; i++) {
		if (temp < each) {
			temp += ar[i];
		} else {
			j = i;
			break;
		}
	}

	while(ar[j] == 0) {
		z++;
		j++;
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

