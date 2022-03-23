#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Rect {
	int x1, y1, x2, y2;
	int area() {
		return (y2 - y1) * (x2 - x1);
	}
};

int inter(Rect a, Rect b) {
	int x = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
	int y = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
	return x * y;
}

void solve() {
	Rect a, b, ol;
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

	ol.x1 = max(a.x1, b.x1);
	ol.x2 = min(a.x2, b.x2);
	ol.y1 = max(a.y1, b.y1);
	ol.y2 = min(a.y2, b.y2);

	if (inter(a, b)) {
		if ((ol.y1 == a.y1 && ol.y2 == a.y2 && (ol.x1 == a.x1 || ol.x2 == a.x2)) ||
			(ol.x1 == a.x1 && ol.x2 == a.x2 && (ol.y1 == a.y1 || ol.y2 == a.y2))) {
			cout << a.area() - ol.area() << '\n';
		} else {
			cout << a.area() << '\n';
		}
	} else {
		cout << a.area() << '\n';
	}
}

int main() {
	freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);
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

