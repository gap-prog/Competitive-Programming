// USACO Training Pages Problem Link: https://train.usaco.org/usacoprob2?a=YEDXtDyF8wt&S=namenum

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("namenum.in");
  ofstream fout("namenum.out");
  ifstream dict("dict.txt");
  string s, name;
  fin >> s;
  bool ok = false;
  while(dict >> name) {
    if (name.length() == s.length()) {
      string num = "";
      for (int i = 0; i < name.length(); ++i) {
        if (name[i] == 'Q' || name[i] == 'Z') continue;
        if (name[i] < 'Q') num += ((name[i] - 'A') / 3) + '2';
        else num += ((name[i] - 'Q') / 3) + '7';
      }
      if (num != s) continue;
      ok = true;
      fout << name << '\n';
    }
  }
  if (!ok) fout << "NONE" << '\n';
  return 0;
}
