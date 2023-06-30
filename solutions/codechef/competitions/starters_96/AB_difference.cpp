// CodeChef Problem Link: https://www.codechef.com/START96B/problems/ABDIFF

#include <iostream>
using namespace std;

int main() {
  int a, b; cin >> a >> b;
  cout << abs(a * b - (a + b)) << '\n';
  return 0;
}
