// USACO Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=687

#include <bits/stdc++.h>
using namespace std;

map<string, int> m = {
    {"Bessie", 0},
    {"Elsie", 0},
    {"Daisy", 0},
    {"Gertie", 0},
    {"Annabelle", 0},
    {"Maggie", 0},
    {"Henrietta", 0},
};

int main() {
    ifstream fin("notlast.in");
    ofstream fout("notlast.out");
    int n; fin >> n;
    while (n--) {
        string cow; fin >> cow;
        int prod; fin >> prod;
        m[cow] += prod;
    }
    int mn = INT_MAX, smn = INT_MAX;
    for (auto i: m) {
        if (i.second < mn) {
            smn = mn;
            mn = i.second;
        } else if (i.second > mn && i.second < smn) smn = i.second;
    }
    string ans;
    int ct = 0;
    for (auto i: m) {
        if (i.second == smn) {
            ans = i.first;
            ct++;
        }
    }
    fout << (ct == 1 ? ans : "Tie") << '\n';
    return 0;
}