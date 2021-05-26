#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, b, dig = 0; string s; vector<int> xd; cin >> a >> b >> s;
	for (int i = 0; i < s.length(); i++) dig += pow(a, i)*(s[i]-'0');
	while(dig != 0) { xd.push_back(dig%b); dig/=b; }
	reverse(xd.begin(), xd.end());
	for (int& x : xd) cout << x;
}
