// HackerRank Problem Link: https://www.hackerrank.com/challenges/bon-appetit/problem

#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

void bonAppetit(vector<int> bill, int k, int b) {
    int p = 0;
    for (int i = 0; i < bill.size(); ++i) {
        if (i != k) {
            p += bill[i];
        }
    }
    p /= 2;
    if (p == b) {
        cout << "Bon Appetit" << endl;
    } else {
        cout << b - p << endl;
    }
}

int main() {
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);
    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
    int n = stoi(first_multiple_input[0]);
    int k = stoi(first_multiple_input[1]);
    string bill_temp_temp;
    getline(cin, bill_temp_temp);
    vector<string> bill_temp = split(rtrim(bill_temp_temp));
    vector<int> bill(n);
    for (int i = 0; i < n; i++) {
        int bill_item = stoi(bill_temp[i]);
        bill[i] = bill_item;
    }
    string b_temp;
    getline(cin, b_temp);
    int b = stoi(ltrim(rtrim(b_temp)));
    bonAppetit(bill, k, b);
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

vector<string> split(const string &str) {
    vector<string> tokens;
    string::size_type start = 0;
    string::size_type end = 0;
    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
    }
    tokens.push_back(str.substr(start));
    return tokens;
}
