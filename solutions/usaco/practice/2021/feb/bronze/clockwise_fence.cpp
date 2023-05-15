// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=1109

#include <bits/stdc++.h>
using namespace std;

int angle(char angle) {
	if (angle == 'E') return 0;
	else if (angle == 'N') return 90;
	else if (angle == 'W') return 180;
	else return 270;
}

int angle_change(char dir1, char dir2) {
	int start = angle(dir1), end = angle(dir2);
	if (start == end) return 0;
	else if ((start + 90) % 360 == end) return 90;
	else if ((start + 270) % 360 == end) return -90;
	else assert(false);
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		int res = 0;
		for (int i = 0; i < s.length(); ++i) {
			res += angle_change(s[i], s[(i + 1) % s.size()]);
		}
		if (res == 360) cout << "CCW" << '\n';
		else cout << "CW" << '\n';
	}
	return 0;
}
