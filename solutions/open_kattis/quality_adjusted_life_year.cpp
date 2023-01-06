// Open Kattis Problem Link: https://open.kattis.com/problems/qaly

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    float total = 0;
    for (int i = 0; i < n; ++i) {
        float a, b;
        cin >> a >> b;
        total += a * b;
    }
    printf("%.3f", total);
	return 0;
}
