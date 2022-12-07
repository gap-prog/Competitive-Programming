// CodeChef Problem Link: https://www.codechef.com/problems/LUCKYFR

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    string num;
	    cin >> num;
	    int count = 0;
	    for (auto &i: num) {
	        if (i == '4') {
	            count++;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
