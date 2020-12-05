#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int n, x, ar[mxN];
int po[32];

int pow2(int x) {
	if (po[x] != -1) 
		return po[x];
	int ans = 1;
	for (int i = 0; i < x; i++) {
		ans *= 2;
	}
	return po[x] = ans;
}

void solve() {
	cin >> n >> x;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	while(x > 0) {
		int temp = -1, temp2 = -1;
		int pos1, pos2, cnt2 = 0;
		bool f = false;
		for (int i = 0; i < n; i++) {
			if (cnt2 == n) 
				f = true;
			if (ar[i] != 0) {
				if (temp == -1) {
					temp = ar[i];
					pos1 = i;
				} else if (temp2 == -1) {
					temp2 = ar[i];
					pos2 = i;
				} else {
					break;
				}
			} else {
				cnt2++;
			}
		}
		if (f)
			break;

		//cout << "temp: " << temp << "\n";
		//cout << "temp2: " << temp2 << "\n";
		//cout << "pos1: " << pos1 << "\n";
		//cout << "pos2: " << pos2 << "\n";
		
		string s1 = bitset<32>(temp).to_string();
		string s2 = bitset<32>(temp2).to_string();
		
		//cout << "s1: " << s1 << "\n";
		//cout << "s2: " << s2 << "\n";

		int mn = min(__builtin_clz(temp), __builtin_clz(temp2));
		//cout << "mn: " << mn << "\n";

		int cnt = 0;
		for (int i = mn; i < 32; i++) {
			if (s1[i] == '1' && s2[i] == '1') {
				cnt++;
				int XOR = 32-mn-1;
				//cout << "XOR: " << XOR << "\n";
				//cout << "pow2(XOR): " << pow2(XOR) << "\n";
				ar[pos1] ^= pow2(XOR);
				ar[pos2] ^= pow2(XOR);
				//cout << "ar[pos1]: " << ar[pos1] << "\n";
				//cout << "ar[pos2]: " << ar[pos2] << "\n";
			}
		}
		x -= cnt;
	}
	for (int i = 0; i < n; i++) {
		cout << ar[i] << " ";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	memset(po, -1, sizeof(po));

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

