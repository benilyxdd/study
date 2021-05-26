#include <bits/stdc++.h>
using namespace std;

int N, Q;

int ask(int a, int b, int c){
	cout << (a+1) << ' ' << (b+1) << ' ' << (c+1) << '\n';
	cout << flush;
	int res;
	cin >> res;
	if(res == -1) exit(0);
	return (res-1);
}

void solve(){
	vector<int> ord = {0, 1};
	for(int j = 2; j < N; j++){
		int s = 0;
		int e = (int)ord.size()+1;
		while(s + 1 < e){
			int m1 = (s + s + e) / 3;
			int m2 = (s + e + e) / 3;
			if(m1 == 0) m1++;
			while(m2 <= m1) m2++;
			if(m2 == (int)ord.size()+1) m2--;
			while(m1 >= m2) m1--;
			int res = ask(j, ord[m1-1], ord[m2-1]);
			if(res == j){
				s = max(s, m1);
				e = min(e, m2);
			} else if(res == ord[m1-1]){
				e = min(e, m1);
			} else if(res == ord[m2-1]){
				s = max(s, m2);
			}
		}
		ord.insert(ord.begin() + s, j);
	}
	for(int i = 0; i < N; i++){
		cout << (ord[i]+1) << " \n"[i == (N-1)];
	}
	cout << flush;
	int verdict;
	cin >> verdict;
	if(verdict == -1) exit(0);
}

int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int T;
	cin >> T >> N >> Q;
	while(T--) solve();
}