#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector<string> dealer, non_dealer, deck;
map<char, int> m;

void init() {
	for (int i = 0; i < 52; i++) {
		string a;
		cin >> a;
		if (i&1) 
			dealer.push_back(a);
		else
			non_dealer.push_back(a);
	}

	m['A'] = 4;
	m['K'] = 3;
	m['Q'] = 2;
	m['J'] = 1;
}

void res() {
	if (dealer.size() == 0) {
		cout << 2 << " " << non_dealer.size() << "\n";
	} else {
		cout << 1 << " " << dealer.size() << "\n";
	}
	return;
}

string f(bool round) {
	string s;
	if (!round) {
		if (non_dealer.size() == 0) 
			res();
		s = non_dealer.back();
		deck.push_back(s);
		non_dealer.pop_back();
	} else {
		if (dealer.size() == 0) 
			res();
		s= dealer.back();
		deck.push_back(s);
		dealer.pop_back();
	}
	return s;
}

bool face(string card) {
	if (card[1] == 'A' || card[1] == 'K' || card[1] == 'Q' || card[1] == 'J')
		return true;
	return false;
}

void faceafter(bool round, string card) {
	for (int i = 0; i < m[card[i]]; i++) {
		string s = f(round);
		if (face(s)) {
			faceafter(round^1, s);
			break;
		}
	}
}	

void play() {
	bool round = 0;
	while(dealer.size() > 0 && non_dealer.size() > 0) {
		string card = f(round);
		if (face(card)) {
			round = 1;
			faceafter(round, card);

		} else {
			round = 1;
		}
	}
}

void solve() {
	init();
	play();
	res();
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


