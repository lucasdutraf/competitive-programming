#include <bits/stdc++.h>
using namespace std;
using sc = set<char>;

int main () {
  sc s; string in;
  cin >> in;
  for (auto elem: in) {s.insert(elem);}
  cout << (s.size() == 2 ? "Yes" : "No") << endl;

  return 0;
}
