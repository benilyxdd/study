#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(int cnt[], int cnt2[]) {  
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > cnt2[i]) {
            return false;
        }
    }
    return true;
}

bool cmp(string& a, string& b) {
    return (a.length() < b.length());
}

vector<string> f(string& a, string& b) {
    vector<string> res;
    int cnt[26], cnt2[26], n = a.length();
    memset(cnt, 0, sizeof(cnt)); 
    memset(cnt2, 0, sizeof(cnt2)); 
    for (char& ch : b) {   
        cnt[ch - 'A']++;
    }

    for (int i = 0, j = 0; j < n;) { 
		cnt2[a[j] - 'A']++;
		if (!check(cnt, cnt2)) {
            j++;
        } else {
            string temp = a.substr(i, j - i); 
            res.push_back(temp);
        	cnt2[a[i] - 'A']--;
			i++;
		} 
	}
    sort(res.begin(), res.end(), cmp);
    return res;

    //overall complexity = O(nlogn + len(a) * 2 + len(b));
}

void solve() {
	string a, b;
	cin >> a >> b;
	vector<string> ar = f(a, b);
	for (string& x : ar) {
		cout << x << ' ';
	}
	cout << '\n';
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

