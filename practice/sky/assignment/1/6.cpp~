#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<vector<int>> res;

__int128 fact(int nb) {
    __int128 result = 1;

    for (__int128 i = 2; i <= nb; i++) {
        result = result * i;
    }
    return result;
}

void sum_up(vector<int> numbers, int target, int currSum, vector<int> temp, int pos) {
	if (currSum == target) {
		res.push_back(temp);
		return;
	}
	if (currSum > target) {
		return;
	}
	int len = numbers.size();
	for (int i = pos; i < len; i++) {
		currSum += numbers[i];
		temp.push_back(numbers[i]);
		sum_up(numbers, target, currSum, temp, i);
		currSum -= numbers[i];
		temp.pop_back();
	}
}

__int128 count(vector<int> v) {
	int len = v.size();

	__int128 freq[51] = {0};

	for (int i = 0; i < len; i++) {
		freq[v[i]]++;
	}
	
	__int128 end = fact(len);
	for (int i = 0; i < 51; i++) {
		end /= fact(freq[i]);
	}

	return end;
}

void solve() {
	int n;
	cin >> n;
	vector<int> prime;
	prime.push_back(1);
	prime.push_back(2);
	for (int i = 3; i <= 50; i++) {
		bool t = false;
		for (int j = 2; j < i; j++) {
			if (i%j == 0) {
				t = true;
				break;
			}
		}
		if (t == false) {
			prime.push_back(i);
		}
	}
	vector<int> temp;
	sum_up(prime, n, 0, temp, 0);
	// /*	
	ll ans = 0;
	for (auto vector : res) {
		set<int> s(vector.begin(), vector.end());
		int cnt[51] = {0};
		for (int in : vector) {
			cnt[in]++;
		}
		ans += count(vector);
	}
	cout << ans << "\n";
	// */
	/*
	for (auto vec : res){
		for (auto in : vec) {
			cout << in << " ";
		}
		cout << "\n";
	}
	*/
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

