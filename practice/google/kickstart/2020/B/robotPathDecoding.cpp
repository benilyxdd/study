#include <bits/stdc++.h>
using namespace std;

#define ll long long
map<char, int> m
int i;

void f(string a) {
	if(a[i] > 49 && a[i] < 58) {
		string temp;
		int cnt = 1, j = i+1;
		while(cnt > 0) {
			if (ar[j] == '(') {
				cnt++;
			} else if (ar[j] == ')') {
				cnt--;
			}
			temp += a[j];
		}
		
		f(temp);

		int mu = ar[i]-'0';
		for (pair<const char, int>& x : m) {
			x.second *= mu;
		}
	}	
}

void solve() {
	m['N'] = 0;
	m['S'] = 0;
	m['E'] = 0;
	m['W'] = 0;
	
	string s;
	cin >> s;
	int len = s.length();
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
