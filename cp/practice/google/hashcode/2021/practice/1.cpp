#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool cmp(vector<string>& a, vector<string>& b) {
	return a.size() > b.size();
}

void solve() {
	int number_of_pizza, two, three, four;
	cin >> number_of_pizza >> two >> three >> four;

	vector<string> pizza[number_of_pizza];
	for (int i = 0; i < number_of_pizza; i++) {
		int ingredients;
		cin >> ingredients;
		for (int j = 0; j < ingredients; j++) {
			string ingredient;
			cin >> ingredient;
			pizza[i].push_back(ingredient);
		}
	}

	sort(pizza, pizza+number_of_pizza, cmp);
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	//freopen("output.txt", "w", stdout);

	solve();
}

