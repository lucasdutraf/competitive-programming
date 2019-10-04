#include <bits/stdc++.h>
using namespace std;

int main () {

  int n; cin >> n;

  while (n--) {
    int s; cin >> s;
    string tel; cin >> tel;
    if (tel.size() < 11) {
      cout << "NO" << endl;
      continue;
    }
    else {
      auto a = tel.find('8');
      if (a == string::npos) {
        cout << "NO" << endl;
        continue;
      }
      else {
        if ((tel.size() - a) - 1 < 10) {
          cout << "NO" << endl;
          continue;
        }
        else {
          cout << "YES" << endl;
          continue;
        }
      }
    }
  }

  return 0;
}
