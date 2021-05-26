#include <bits/stdc++.h>
using namespace std;

#define ll long long
string a;
int k1, k2, ar[2], cnt;

void add(int i) {
	if (a[i] == 'L') {
		ar[0]++;
	} else {
		ar[1]++;
	}
}

void solve() {
	cin >> a >> k1 >> k2;
	int n = a.length();
	memset(ar, 0, sizeof(ar));
	cnt = 0;
	vector<int> v;
	v.push_back(-1);
	for (int i = 0; i < n; i++) {
		if ((i+1)%k1 != 0 && (i+1)%k2 != 0 && a[i] != 'W') {
			v.push_back(i);
		}
	}
	for (int i = 0; i < n; i++) {
		if (i > -1) {
			add(i);
			//cout << "ar[0]: " << ar[0] << " " << ar[1] << "\n";
			if (ar[0] >= ar[1]) {
				auto it = upper_bound(v.begin(), v.end(), i);
				if (it != v.begin()) {
					it--;
				} else {
					cout << "-1\n";
					return;
				}
				if (*it == -1) {
					cout << "-1\n";
					return;
				} else {
					int yo = *it;
					a[yo] = 'W';
					ar[0]--, ar[1]++, cnt++;
					for (int i = 0; i < v.size(); i++) {
						if (v[i] == yo) {
							v.erase(v.begin()+i);
							break;
						}
					}
				}
			}
		}
	}
	cout << cnt << "\n" << a << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

