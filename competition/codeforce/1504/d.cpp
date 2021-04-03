#include <bits/stdc++.h>
using namespace std;

int ask() {
	int x;
	cin >> x;
	return x;
}

int main() {
	int n;
	cin >> n;

	int box[n][n], col[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			box[i][j] = -1;
			col[i][j] = (i+j)%2;
		}
	}
	
	int lock = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int alice = ask();
			//first 
			if (lock == -1) {
				for (int k = 1; k <= 3; k++) {
					if (alice != k) {
						lock = k;
						break;
					}
				}
			}
			
			if (alice != lock) {
				bool done = 0;
				for (int k = 0; k < n; k++) {
					for (int l = 0; l < n; l++) {
						if (col[k][l] == 1 && box[k][l] == -1) {
							box[k][l] = lock;
							cout << lock << ' ' << k+1 << ' ' << l+1 << endl;
							done = 1;
							break;
						}
					}
					if (done) {
						break;
					}
				}
				
				if (!done) {
					int write = -1;
					for (int k = 1; k <= 3; k++) {
						if (k != lock && k != alice) {
							write = k;
						}
					}

					bool go = 0;
					for (int k = 0; k < n; k++) {
						for (int l = 0; l < n; l++) {
							if (col[k][l] == 0 && box[k][l] == -1) {
								box[k][l] = write;
								cout << write << ' ' << k+1 << ' ' << l+1 << endl;
								go = 1;
								break;
							}
						}
						if (go) {
							break;
						}
					}
				}

			} else {
				bool done = 0;
				for (int k = 0; k < n; k++) {
					for (int l = 0; l < n; l++) {
						if (col[k][l] == 0 && box[k][l] == -1) {
							int x = (alice+1)%3;
							if (x == 0) {
								x++;
							}
							if (x == lock) {
								x++;
							}
							box[k][l] = x;
							cout << x << ' ' << k+1 << ' ' << l+1 << endl;
							done = 1;
							break;
						}
					}
					if (done) {
						break;
					}
				}

				if (!done) {
					int val = -1;
					for (int k = 1; k <= 3; k++) {
						if (k != alice) {
							val = k;
						}
					}
					bool go = 0;
					for (int k = 0; k < n; k++) {
						for (int l = 0; l < n; l++) {
							if (col[k][l] == 0 && box[k][l] == -1) {
								box[k][l] = val;
								cout << val << ' ' << k+1 << ' ' << l+1 << endl;
								go = 1;
								break;
							}
						}
						if (go) {
							break;
						}
					}
				}
			}
			//cout << "BOX\n";

			//for (int k = 0; k < n; k++) {
				//for (int l = 0; l < n; l++) {
					//cout << box[k][l] << ' ';
				//}
				//cout << '\n';
			//}
		}
	}
	return 0;
}
