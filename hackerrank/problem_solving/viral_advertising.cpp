// HackerRank Problem Link: https://www.hackerrank.com/challenges/strange-advertising/problem

#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int viralAdvertising(int n) {
    int p = 5;
    int t = 0;
    for (int i = 0; i < n; ++i) {
        int l = floor(p / 2);
        t += l;
        p = l * 3;
    }
    return t;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));
    string n_temp;
    getline(cin, n_temp);
    int n = stoi(ltrim(rtrim(n_temp)));
    int result = viralAdvertising(n);
    fout << result << "\n";
    fout.close();
    return 0;
}

string ltrim(const string &str) {
    string s(str);
    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );
    return s;
}

string rtrim(const string &str) {
    string s(str);
    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );
    return s;
}
