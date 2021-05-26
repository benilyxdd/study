#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int p, f, cnts, cntw, s, w;
	cin >> p >> f >> cnts >> cntw >> s >> w;
	int total = 0;
	int temp = 0;
	int sa, wa;
	//me
	for (int i = 0; i <= cnts; i++) {
		int x = p;
		x -= s*i;
		temp = i;
		temp += min(x/w, cntw);
		if (temp > total) {
			total = temp;
			sa = i;
			wa = min(x/w, cntw);
		}
	}
	cnts -= sa;
	cntw -= wa;

	//you
	int you = 0, temp2 = 0;
	for (int i = 0; i <= cnts; i++) {
		int x = f;
		x -= w*i;
		you = i;
		you += min(x/w, cntw);
		temp2 = max(temp2, you);
	}
	cout << total+temp2 << "\n";
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

