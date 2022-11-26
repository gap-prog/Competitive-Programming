// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=831

#include <set>
#include <vector>
#include <iostream>
using namespace std;

int f[2];
set<char> c;
vector< set<char> > v;

void checkSet(char c1, char c2, char c3) {
	c.insert(c1);
	c.insert(c2);
	c.insert(c3);
	int count = 0;
	for (int i = 0; i < v.size(); i++) {
		if (c == v[i]) {
			count += 1;
		}
	}
	if (count == 0) {
		if (c.size() == 1) {
			f[0]++;
		} else if (c.size() == 2) {
			f[1]++;
		}
		v.push_back(c);
	}
	c.clear();
}

int main() {
	freopen("tttt.in", "r", stdin);
	freopen("tttt.out", "w", stdout);
	char board[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> board[i][j];
		}
	}
	checkSet(board[0][0], board[1][1], board[2][2]);
	checkSet(board[0][2], board[1][1], board[2][0]);
	for (int i = 0; i < 3; i++) {
		checkSet(board[i][0], board[i][1], board[i][2]);
	}
	for (int i = 0; i < 3; i++) {
		checkSet(board[0][i], board[1][i], board[2][i]);
	}
	for (int i = 0; i < 2; i++) {
		cout << f[i] << endl;
	}
}
