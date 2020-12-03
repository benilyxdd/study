#include <bits/stdc++.h>
using namespace std;

#define ll long long
string s;

void solve() {
	cin >> s;
	int h = stoi(s.substr(0, 2));
	int m = stoi(s.substr(3, 2));
	string h_str = s.substr(0, 2), m_str = s.substr(3, 2);
	reverse(m_str.begin(), m_str.end());
	int ans = 0;
	while(h_str != m_str) {
		m++;
		if (m >= 60) {
			m = 0;
			h++;
		}
		if (h >= 24) {
			h = 0;
		}
		
		h_str = to_string(h);
		m_str = to_string(m);
		if (h < 10) {
			string temp = h_str;
			h_str = "0";
			h_str += temp;
		}

		if (m < 10) {
			string temp = m_str;
			m_str = "0";
			m_str += temp;
		}
		//cout << h_str << " " << m_str << "\n";
		reverse(m_str.begin(), m_str.end());
		ans++;
	}
	cout << ans << "\n";
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


