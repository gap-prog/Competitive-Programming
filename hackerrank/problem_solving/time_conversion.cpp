// HackerRank Problem Link: https://www.hackerrank.com/challenges/time-conversion/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, m, s;
    char temp_ampm[3];
    scanf("%d:%d:%d%s", &h, &m, &s, temp_ampm);
    string ampm = temp_ampm;
    if (ampm == "PM" && h != 12) {
        h += 12;
    } else if (ampm == "AM" && h == 12) {
        h = 0;
    }
    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}
