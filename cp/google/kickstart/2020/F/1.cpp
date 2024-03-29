#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	vector<int> v;
	for(int i = 0; i < a; i++) {
		int c;
		cin >> c;
		v.push_back(c);
	}
	int mx = *max_element(v.begin(), v.end());
	while(mx > 0) {
	    for (int i = 0; i < a; i++) {
	        if (v[i] <= b && v[i] > 0) {
	            cout << i+1 << " ";
	        }
	    }
	    for (int i = 0; i < a; i++) {
	        v[i] = v[i] - b;
	    }
		mx = *max_element(v.begin(), v.end());
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
