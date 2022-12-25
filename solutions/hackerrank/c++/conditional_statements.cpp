// HackerRank Problem Link: https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem

#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string n_temp;
    getline(cin, n_temp);
    int n = stoi(ltrim(rtrim(n_temp)));
    string num_wrd[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n >= 1 && n <= 9) {
        cout << num_wrd[n - 1] << endl;
    } else {
        cout << "Greater than 9" << endl;
    }
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

