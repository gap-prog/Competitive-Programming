// HackerRank Problem Link: https://www.hackerrank.com/challenges/apple-and-orange/problem

#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int apple = 0;
    int orange = 0;
    int point;
    for (auto &i: apples) {
        point = a + i;
        if (point >= s && point <= t) {
            apple++;
        }
    }
    for (auto &i: oranges) {
        point = b + i;
        if (point >= s && point <= t) {
            orange++;
        }
    }
    cout << apple << '\n' << orange << endl;
}

int main() {
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);
    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
    int s = stoi(first_multiple_input[0]);
    int t = stoi(first_multiple_input[1]);
    string second_multiple_input_temp;
    getline(cin, second_multiple_input_temp);
    vector<string> second_multiple_input = split(rtrim(second_multiple_input_temp));
    int a = stoi(second_multiple_input[0]);
    int b = stoi(second_multiple_input[1]);
    string third_multiple_input_temp;
    getline(cin, third_multiple_input_temp);
    vector<string> third_multiple_input = split(rtrim(third_multiple_input_temp));
    int m = stoi(third_multiple_input[0]);
    int n = stoi(third_multiple_input[1]);
    string apples_temp_temp;
    getline(cin, apples_temp_temp);
    vector<string> apples_temp = split(rtrim(apples_temp_temp));
    vector<int> apples(m);
    for (int i = 0; i < m; i++) {
        int apples_item = stoi(apples_temp[i]);
        apples[i] = apples_item;
    }
    string oranges_temp_temp;
    getline(cin, oranges_temp_temp);
    vector<string> oranges_temp = split(rtrim(oranges_temp_temp));
    vector<int> oranges(n);
    for (int i = 0; i < n; i++) {
        int oranges_item = stoi(oranges_temp[i]);
        oranges[i] = oranges_item;
    }
    countApplesAndOranges(s, t, a, b, apples, oranges);
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
