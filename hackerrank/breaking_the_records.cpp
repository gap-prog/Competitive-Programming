// HackerRank Problem Link: https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

vector<int> breakingRecords(vector<int> scores) {
    vector<int> records = {0, 0};
    int highest = scores[0], lowest = scores[0];
    for (int i = 1; i < scores.size(); ++i) {
        if (scores[i] > highest) {
            highest = scores[i];
            records[0]++;
        }
        if (scores[i] < lowest) {
            lowest = scores[i];
            records[1]++;
        }
    }
    return records;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));
    string n_temp;
    getline(cin, n_temp);
    int n = stoi(ltrim(rtrim(n_temp)));
    string scores_temp_temp;
    getline(cin, scores_temp_temp);
    vector<string> scores_temp = split(rtrim(scores_temp_temp));
    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        int scores_item = stoi(scores_temp[i]);
        scores[i] = scores_item;
    }
    vector<int> result = breakingRecords(scores);
    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];
        if (i != result.size() - 1) {
            fout << " ";
        }
    }
    fout << "\n";
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
