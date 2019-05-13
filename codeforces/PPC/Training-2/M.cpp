#include <bits/stdc++.h>
using namespace std;
using sc = set<char>;

bool ans(string a) {
  sc wer;
  for (size_t i = 0; i < a.size(); i++) {
    wer.insert(a[i]);
  }
  if (wer.size() % 2 == 0) {
    return true;
  }
  else {
    return false;
  }
}

int main () {

  string username;
  cin >> username;
  if (ans(username) == true) {
    cout << "CHAT WITH HER!" << endl;
  }
  else {
    cout << "IGNORE HIM!" << endl;
  }
  return 0;
}
