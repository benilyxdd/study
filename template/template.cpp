#include <bits/stdc++.h>
using namespace std;

#define ll long long
// direction vectors 
// {up, down, right, left, upper-left, upper-right, lower-left, lower-right}
int dr[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dc[8] = {0, 0, 1, -1, -1, 1, -1, 1};

struct Rect { // Rectangle
	int x1, y1, x2, y2;
	// constructor(s)
	Rect() {
		x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	};

	Rect(int a, int b, int c, int d) {
		x1 = a, y1 = b, x2 = c, y2 = d;
	};

	// normal method(s)
	ll area() {
		return 1ll * abs(y2 - y1) * abs(x2 - x1);
	};

	// debug method(s)
	void print() {
		cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2 << '\n';
	};
};

ll intersectArea(Rect a, Rect b) { // intersect area of two Rect
	int x = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
	int y = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
	return (ll)x * y;
}

Rect intersect(Rect a, Rect b) { // coordinate of intersect area (x1, y1, x2, y2)
	int i = max(min(a.x1, a.x2), min(b.x1, b.x2));
	int j = max(min(a.y1, a.y2), min(b.y1, b.y2));
	int k = min(max(a.x1, a.x2), max(b.x1, b.x2));
	int p = min(max(a.y1, a.y2), max(b.y1, b.y2));

	if (k <= i || p <= j) {
		return Rect();
	}
	return Rect(i, j, k, p);
}

void solve() {

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

