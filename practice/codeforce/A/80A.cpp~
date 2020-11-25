#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	vector<int> v;
	for (int i = 2; i < 50; i++) {
		v.push_back(i);
	}

	for (int i = 0; i < v.size(); i++) {
		for (int j = 2; j < v[i]; j++) {
			if (v[i]%j == 0){
				v[i] = 51;
			}
		}
	}
	sort(v.begin(), v.end());
	
	while(v.back() == 51) {
		v.pop_back();
	}

	for (int i = 0; i < v.size(); i++) {
		if (a==v[i]){
			if (v[i+1] == b) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}
		}
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


