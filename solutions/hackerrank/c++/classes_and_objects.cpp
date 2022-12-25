// HackerRank Problem Link: https://www.hackerrank.com/challenges/classes-objects/problem

#include <iostream>
using namespace std;

class Student {
	private:
		int scores[5];
	public:
		void input() {
			for (int i = 0; i < 5; ++i) {
				cin >> scores[i];
			}
		}
		int calculateTotalScore() {
			int sum = 0;
			for (int i = 0; i < 5; ++i) {
				sum += scores[i];
			}
			return sum;
		}
};

int main() {
	int n;
	cin >> n;
	Student *s = new Student[n];
	for (int i = 0; i < n; ++i) {
		s[i].input();
	}
	int kscore = s[0].calculateTotalScore();
	int count = 0;
	for (int i = 0; i < n; ++i) {
		int total = s[i].calculateTotalScore();
		if (total > kscore) {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
