//https://www.geeksforgeeks.org/ugly-numbers/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int ar[mxN], n; /* ugly array, target */

void solve() {
	ar[0] = 1; /* the first one is 1 */
	
	cin >> n;
	int i2 = 0, i3 = 0, i5 = 0; 
	int n2 = 2, n3 = 3, n5 = 5;

	for (int i = 1; i < n; i++) {
		int next = min({n2, n3, n5});
		ar[i] = next;
		if (next == n2) {
			i2++;
			n2 = ar[i2]*2;
		}
		if (next == n3) {
			i3++;
			n3 = ar[i3]*3;
		}
		if (next == n5) {
			i5++;
			n5 = ar[i5]*5;
		}
	}
	cout << ar[n-1] << '\n';
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

