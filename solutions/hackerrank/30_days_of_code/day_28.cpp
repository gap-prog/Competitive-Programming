// HackerRank Problem Link: https://www.hackerrank.com/challenges/30-regex-patterns/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> people;
    while(n--) {
        string name, email;
        cin >> name >> email;
        if (email.find("@gmail.com") < email.length()) {
            people.push_back(name);
        }
    }
    sort(people.begin(), people.end());
    for (int i = 0; i < people.size(); ++i) {
        cout << people[i] << endl;
    }
}
