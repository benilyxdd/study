#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, q;
	cin >> t >> n >> q;
	for (int i = 0; i < t; i++) {
		list<int> ls;

		int last_med = -1;
		for (int j = 1; j <= n-2; j++) {
			cout << j << ' ' << j+1 << ' ' << j+2 << '\n';
			fflush(stdout);

			int med;
			cin >> med;

			if (j == 1) {
				for (int k = 1; k < 3; k++) {
					if (k != med) {
						ls.push_back(k);
						break;
					}
				}
				ls.push_back(med);
				for (int k = 1; k <= 3; k++) {
					if (k != med && k != ls.front()) {
						ls.push_back(k);
						break;
					}
				}
			} else {
				if (med - last_med == 3) {
					cout << last_med << ' ' << j+1 << ' ' << med << '\n';
					fflush(stdout);

					int new_med;
					cin >> new_med;
					
					int pos = -1;
					vector<int> v = {j+1, last_med};
					sort(v.begin(), v.end());
					
					for (auto it = ls.begin(); it != ls.end(); it++) {
						if (*it == v[0]) {
							while(it != ls.end()) {
								it++;
								if (*it == v[1]) {
									pos = 1;
									break;
								}
							}
							if (pos == -1) {
								pos = 0;
							}
							it--;
						}
					}
						
					if (pos) {
						auto it = find(ls.begin(), ls.end(), v[1]);
						ls.insert(it, j+2);
					} else {
						auto it = find(ls.begin(), ls.end(), v[0]);
						it++;
						ls.insert(it, j+2);
					}
				} else {
					if (med == j+1) {
						if (ls.back() == j+1) {
							ls.push_back(j+2);
						} else if (ls.front() == j) {
							ls.push_front(j+2);
						}
						continue;
					}
					int pos = -1;
					vector<int> v, v1;
					for (int k = j; k <= j+2; k++) {
						if (k != med) {
							v1.push_back(k);
						}
					}

					for (auto it = ls.begin(); it != ls.end(); it++) {
						if (*it == v1[0] || *it == v1[1]) {
							v.push_back(*it);
						}
					}

					for (auto it = ls.begin(); it != ls.end(); it++) {
						if (*it == v[0]) {
							it++;
							if (*it == v[1]) {
								pos = 1;
							} else {
								pos = 0;
							}
							break;
						}
					}

					if (pos) {
						auto it = find(ls.begin(), ls.end(), v[1]);
						ls.insert(it, j+2);
					} else {
						auto it = find(ls.begin(), ls.end(), v[0]);
						it++;	
						ls.insert(it, j+2);
					}
				}
			}
			last_med = med;
		}

		assert((int)ls.size() == n);
		//output
		for (auto it = ls.begin(); it != ls.end(); it++) {
			cout << *it << ' ';
		}
		cout << '\n';
		fflush(stdout);

		//output response
		int ok;
		cin >> ok;
		if (ok == -1) {
			return 0;
		}
	}

	return 0;
}
