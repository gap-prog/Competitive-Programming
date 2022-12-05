// HackerRank Problem Link: https://www.hackerrank.com/challenges/counting-valleys/problem

#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int countingValleys(int steps, string path) {
    int valleys = 0, current_level = 0;
    for (auto &i: path) {
        (i == 'U') ? ++current_level : --current_level;
        (current_level == 0 && i == 'U') ? ++valleys : 0;
    }
    return valleys;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));
    string steps_temp;
    getline(cin, steps_temp);
    int steps = stoi(ltrim(rtrim(steps_temp)));
    string path;
    getline(cin, path);
    int result = countingValleys(steps, path);
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
