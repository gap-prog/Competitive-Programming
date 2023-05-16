// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=1108

#include <bits/stdc++.h>
using namespace std;

int n;
bool cells[1000][1000];
int arr_x[] = {-1, 1, 0, 0}, arr_y[] = {0, 0, -1, 1};

bool valid(int num1, int num2) {
	return num1 >= 0 && num1 <= n && num2 >= 0 && num2 <= n;
}

bool checkComfort(int num1, int num2) {
	if (cells[num1][num2] == 0) return 0;
	int neighbors = 0;
	for (int i = 0; i < 4; ++i)
		if (valid(num1 + arr_x[i], num2 + arr_y[i])) if (cells[num1 + arr_x[i]][num2 + arr_y[i]]) neighbors++;
	return neighbors == 3;
}

int main() {
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		for (int j = 0; j < 4; ++j)
			if (valid(x + arr_x[j], y + arr_y[j])) ans -= checkComfort(x + arr_x[j], y + arr_y[j]);
		cells[x][y] = 1;
		for (int j = 0; j < 4; ++j)
			if (valid(x + arr_x[j], y + arr_y[j])) ans += checkComfort(x + arr_x[j], y + arr_y[j]);
		ans += checkComfort(x, y);
		cout << ans << '\n';
	}
	return 0;
}
