#include <bits/stdc++.h>
using namespace std;
using ms = multiset<char>;

int main () {

  int n; cin >> n;
  string s; cin >> s; ms a;
  for (size_t i = 0; i < s.size(); i++) {
    a.insert(s[i]);
  }

  if (a.count('D') > a.count('A')) {
    cout << "Danik" << endl;
  }
  else if (a.count('D') < a.count('A')) {
    cout << "Anton" << endl;
  }
  else {
    cout << "Friendship" << endl;
  }

  return 0;
}
