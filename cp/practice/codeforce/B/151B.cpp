#include <bits/stdc++.h>
using namespace std;

#define ll long long

void check(string& stt, vector<int>& cnt) {
	string str;
	str += stt[0];
	str += stt[1];
	str += stt[3];
	str += stt[4];
	str += stt[6];
	str += stt[7];
	for (int i = 0; i < 5; i++) {
		if (str[i] > str[i+1]) {
			cnt[0]++;
			return;
		}
		if (str[i] == str[i+1]) {
			while(str[i] == str[i+1]) {
				i++;
			}
		}
		if (i == 5) {
			cnt[1]++;
			return;
		}
	}
	cnt[2]++;
}

void solve() {
	pair<int, vector<string>> m[3];

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int s;
		string na;
		cin >> s >> na;

		vector<int> ar(3, 0);
		for (int j = 0; j < s; j++) {
			string st;
			cin >> st;
			check(st, ar);
		}
		for (int j = 0; j < 3; j++) {
			if (ar[j] > m[j].first) {
				m[j].first = ar[j];
				m[j].second.clear();
				m[j].second.push_back(na);
			} else if (ar[j] == m[j].first) {
				m[j].second.push_back(na);
			}
		}	
	}
	for (int i = 0; i < 3; i++) {
		cout << m[i].first << ": ";
		for (string& x : m[i].second) {
			cout << x << " ";
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

