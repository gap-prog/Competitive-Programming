// USACO Training Problem Link: https://train.usaco.org/usacoprob2?a=6gTcQ5dfibn&S=gift1

/*
ID:
TASK: gift1
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("gift1.in", "r", stdin);
	freopen("gift1.out", "w", stdout);
	int n;
	cin >> n;
	vector<string> order;
	map<string, int> people;
	for (int i = 0; i < n; ++i) {
		string name;
		cin >> name;
		order.push_back(name);
		people.insert(pair<string, int>(name, 0));
	}
	for (int i = 0; i < n; ++i) {
		string giver;
		cin >> giver;
		int total, num_people;
		cin >> total >> num_people;
		if (num_people > 0 && total > 0) {
			map<string, int>::iterator it = people.find(giver);
			it->second = (it->second - total) + (total % num_people);
			for (int j = 0; j < num_people; ++j) {
				string person;
				cin >> person;
				map<string, int>::iterator it = people.find(person);
				it->second += total / num_people;
			}
		}
	}
	for (int i = 0; i < n; ++i) {
		map<string, int>::iterator it = people.find(order[i]);
		cout << it->first << " " << it->second << endl;
	}
}
