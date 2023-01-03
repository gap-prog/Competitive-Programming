// CodeChef Problem Link: https://www.codechef.com/LP2TO301/problems/MANYSUMS

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define spc " "
#define nl '\n'
#define sz(x) ((int) x.size())

void solve() {
        int n1, n2;
        cin >> n1 >> n2;
        int count = 0;
        for(int i = 2 * n1; i <= 2 * n2; ++i){
                count++;
        }
        cout << count << endl;
}

int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin >> t;
        while (t--) {
                solve();
        }
}
