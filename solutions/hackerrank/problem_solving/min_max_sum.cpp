// HackerRank Problem Link: https://www.hackerrank.com/challenges/mini-max-sum/problem

#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

void miniMaxSum(vector<int> arr) {
    long min_val = arr[0], max_val = min_val, total_sum = min_val;
    for (int i = 1; i < arr.size(); ++i) {
        total_sum += arr[i];
        min_val = (arr[i] < min_val) ? arr[i] : min_val;
        max_val = (arr[i] > max_val) ? arr[i] : max_val;
    }
    cout << (total_sum - max_val) << " " << (total_sum - min_val) << endl;
}

int main() {
    string arr_temp_temp;
    getline(cin, arr_temp_temp);
    vector<string> arr_temp = split(rtrim(arr_temp_temp));
    vector<int> arr(5);
    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);
        arr[i] = arr_item;
    }
    miniMaxSum(arr);
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
