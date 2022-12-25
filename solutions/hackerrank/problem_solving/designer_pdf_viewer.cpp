// HackerRank Problem Link: https://www.hackerrank.com/challenges/designer-pdf-viewer/problem

#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int designerPdfViewer(vector<int> h, string word) {
    int max_height = 0;
    for (int i = 0; i < word.size(); ++i) {
        max_height = max(max_height, h[word[i] - 97]);
    }
    return max_height * word.size();
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));
    string h_temp_temp;
    getline(cin, h_temp_temp);
    vector<string> h_temp = split(rtrim(h_temp_temp));
    vector<int> h(26);
    for (int i = 0; i < 26; i++) {
        int h_item = stoi(h_temp[i]);
        h[i] = h_item;
    }
    string word;
    getline(cin, word);
    int result = designerPdfViewer(h, word);
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
