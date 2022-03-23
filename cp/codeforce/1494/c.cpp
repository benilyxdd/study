#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	cin >> n >> m;

	int pcnt = 0, ncnt = 0;
	set<int> all, tgt;
	vector<int> neg, pos;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		all.insert(x);
		if (x > 0) {
			pcnt++;
		} else {
			ncnt++;
		}
	}

	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		if (all.count(x) == 1) {
			tgt.insert(x);
		}
		if (x > 0) {
			pos.push_back(x);
		} else {
			neg.push_back(x);
		}
	}
	sort(neg.begin(), neg.end());
	sort(pos.begin(), pos.end());

	int pmx = 0, nmx = 0;
	int nlen = neg.size(), plen = pos.size();
	/*
	cout << "neg array: \n";
	for (int i = 0; i < len; i++)  
		cout << neg[i] << ' ';
	cout << '\n';
	cout << "pos array: \n";
	for (int i = 0; i < len2; i++) 
		cout << pos[i] << ' ';
	cout << '\n';
	*/
	for (int i = 0; i < nlen-1; i++) {
		if (neg[i+1]-neg[i] == 1) {
			int temp = 0;
			while(neg[i+1]-neg[i] == 1) {
				temp++;
				i++;
			}
			nmx = max(nmx, temp);
		}
	}
	
	for (int i = 0; i < plen-1; i++) {
		if (pos[i+1]-pos[i] == 1) {
			int temp = 0;
			while(pos[i+1]-pos[i] == 1) {
				temp++;
				i++;
			}
			pmx = max(pmx, temp);
		}
	}
	cout << "pmx: " << pmx << " nmx: " << nmx << '\n';
	int ans = min(pcnt, pmx) + min(ncnt, nmx);
	cout << ans << '\n';
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

