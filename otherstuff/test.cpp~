#include <bits/stdc++.h>
using namespace std;

#define ll long long

//iterative fast expo
ll ipower(ll a, ll b) {
	ll ans = 1;
	while(b > 0) {
		if (b&1) {
			ans *= a;
		}

		a *= a;
		b /= 2;
	}
	return ans;
}

//recursive fast expo
ll rpower(ll a, ll b) {
	if (b == 0) return 1;
	
	ll temp = rpower(a, b/2);
	ll ans = temp*temp;
	if (b&1) {
		ans *= a;
	}
	return ans;
}

//recurrence relation = t(n) = t(n-1)+1;
void t(int n) {
	if (n > 0) {
		for (int i = 1; i <= n; i++)
			cout << i << " ";
		cout << "\n";
		t(n-1);
		t(n-1);
	}
}

int string_to_int(string s) {
	int t = 0;
	for (int i = s.length()-1, j = 0; i >= 0; i--, j++) {
		if (s[i] == '-') {
			t *= -1;
		} else {
			t += (s[i]-'0')*(pow(10, j));
		}
	}
	return t;
}

int spreadsheet(const string s) {
	int res = 0;
	for (int i = s.length()-1, j = 0; i >= 0; i--, j++) {
		res += pow(26, j)*((s[i]-'A')+1);
	}
	return res;
}

vector<char> replace_and_remove(vector<char>& c) {
	vector<char> v;
	for (char& ch : c) {
		if (ch == 'a') {
			v.push_back('d');
			v.push_back('d');
		} else if (ch == 'b') {
			continue;
		} else {
			v.push_back(ch);
		}
	}
	return v;
}

bool isPalindromic(string s) {
	int x = s.length()/2+1;
	for (int i = 0; i < x; i++)
		if (s[i] != s[s.length()-i-1])
			return false;
	return true;
}

string reverse_string(string s) {
	reverse(s.begin(), s.end());
	return s;
}

void all_permutations(vector<int>& vec) {
	sort(vec.begin(), vec.end());
	do {
		for (int& x : vec) {
			cout << x << " ";
		}
		cout << "\n";
	} while(next_permutation(vec.begin(), vec.end()));
}

void all_subsequences(vector<int>& vec) {
	sort(vec.begin(), vec.end());
	int len = vec.size();
	for (int i = 0; i < (1 << len); i++) {
		vector<int> temp;
		for (int j = 0; j < len; j++) {
			if (i & (1 << j)) {
				temp.push_back(vec[j]);
			}
		}

		for (int& x : temp) 
			cout << x << " ";
		cout << "\n";
	}	
}

bool ok(vector<vector<int>>& ar, int row, int col, int num) {
	for (int i = 0; i < 9; i++) 
		if (ar[row][i] == num)
			return false;
	
	for (int i = 0; i < 9; i++) 
		if (ar[i][col] == num)
			return false;

	int x = row-row%3;
	int y = col-col%3;

	for (int i = 0; i < 3; i++) 
		for (int j = 0; j < 3; j++)
			if (ar[i+x][j+y] == num)
				return false;

	return true;
}

bool sudoku(vector<vector<int>>& ar, int row, int col) {
	if (row == 8 && col == 9) 
		return true;

	if (col == 9) {
		row++;
		col = 0;
	}

	if (ar[row][col] > 0) 
		return sudoku(ar, row, col+1);

	for (int i = 1; i <= 9; i++) {
		if (ok(ar, row, col, i)) {
			ar[row][col] = i;
			if (sudoku(ar, row, col+1))
				return true;
		}
		ar[row][col] = 0;
	}
	return false;
}

void sudoku_solver() {
	vector<vector<int>> ar(9, vector<int>(9));
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			cin >> ar[i][j];
	if (sudoku(ar, 0, 0)) {
		cout << "\n";
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << ar[i][j] << " ";
			}
			cout << "\n";	
		}
	} else {
		cout << "no solution\n";
	}
}

void solve() {

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	//int i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

