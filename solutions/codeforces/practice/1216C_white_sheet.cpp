// CodeForces Problem Link: https://codeforces.com/contest/1216/problem/C

#include <bits/stdc++.h>
using namespace std;

struct Rect {
	int x1, y1, x2, y2;
};

Rect remove(Rect A, Rect B) {
	if (A.x2 >= B.x1 && A.x2 <= B.x2 && A.y1 >= B.y1 && A.y2 <= B.y2) {
		A.x2 = B.x1;
		A.x1 = min(A.x1, B.x1);
	}
	if (A.x1 >= B.x1 && A.x1 <= B.x2 && A.y1 >= B.y1 && A.y2 <= B.y2) {
		A.x1 = B.x2;
		A.x2 = max(A.x2, B.x2);
	}
	if (A.x1 >= B.x1 && A.x2 <= B.x2 && A.y2 >= B.y1 && A.y2 <= B.y2) {
		A.y2 = B.y1;
		A.y1 = min(A.y1, B.y1);
	}
	if (A.x1 >= B.x1 && A.x2 <= B.x2 && A.y1 >= B.y1 && A.y1 <= B.y2) {
		A.y1 = B.y2;
		A.y2 = max(A.y2, B.y2);
	}
	return A;
}

int main() {
	Rect A, B, C;
	cin >> A.x1 >> A.y1 >> A.x2 >> A.y2;
	cin >> B.x1 >> B.y1 >> B.x2 >> B.y2;
	cin >> C.x1 >> C.y1 >> C.x2 >> C.y2;
	A = remove(A, B);
	A = remove(A, C);
	int area = (A.x2 - A.x1) * (A.y2 - A.y1);
	if (area == 0) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}
}
