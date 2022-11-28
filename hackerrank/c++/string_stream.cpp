// HackerRank Problem Link: https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
	vector<int> V;
	int inpt;
	char c;
	while (ss >> inpt) {
		V.push_back(inpt);
		ss >> c;
	}
	return V;
}

int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for (int i = 0; i < integers.size(); i++) {
		cout << integers[i] << endl;
	}
	return 0;
}

