#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define solong "INDEFINITELY\n"

// sum(t) <= ans <= sum(t*2);

void debug(auto pq) {
	cout << '\n';
	while(!pq.empty()) {
		cout << pq.top()[0] << ' ' << pq.top()[1] << '\n';
		pq.pop();
	}
}


void solve() {
	int n;
	cin >> n;
	vector<array<ll, 2>> ar(n);

	auto cmp = [](const array<ll, 2>&a, const array<ll, 2>& b) {
		return a[0]+a[1] < b[0]+b[1];
	};
	priority_queue<array<ll, 2>, vector<array<ll, 2>>, decltype(cmp)> pq(cmp);

	ll sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> ar[i][0] >> ar[i][1];
		//pq.push({ar[i][0], ar[i][1]});
		sum += ar[i][0];
	}
	//cout << sum << '\n';

	//debug(pq);
	//return;
	
	ll cur_t = sum, max_t = sum, rm = 0, temp = 0;
	for (int i = 0; i < n; i++) {
		pq.push({ar[i][0], ar[i][1]});
		//cout << i << ' ' << ar[i][0] << ' ' << ar[i][1] << '\n';
		cur_t += ar[i][0];

		array<ll, 2> tp = pq.top();
		if (tp[0]+tp[1] > sum) {
			pq.pop();
			cur_t -= tp[0]*2;
			sum -= tp[0];

			temp++;

		}

		if (cur_t > max_t) {
			max_t = cur_t;
			rm = temp;
		}
	}
	
	array<ll, 2> tp = pq.top(); 
	ll temp2 = temp;
	while(tp[0]+tp[1] > sum && !pq.empty()) {
		sum -= tp[0];
		cur_t -= tp[0]*2;

		temp2++;
		if (cur_t > max_t) {
			max_t = cur_t;
			rm = temp;
		}

		pq.pop();
		tp = pq.top();
	}


	//debug(pq);

	if (!pq.empty()) {
		rm = temp2;
		cout << rm << ' ' << solong;
	} else {
		cout << rm << ' ' << max_t << '\n';
	}
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

