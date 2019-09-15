#include <bits/stdc++.h>
using namespace std;
using sc = set<char>;

int main () {

  int a; cin >> a;
  int even = 0, odd = 0, total = 0;
  string b; cin >> b;

  for (size_t i = 0; i < b.size(); i++) {
    int x = b[i] - '0';
    if (x % 2 == 0) {
      even++;
    }
    else {
      odd++;
    }
  }
  for (size_t i = 0; i < b.size(); i++) {
    int x = b[i] - '0';
    if (x % 2 == 0) {
      total += even;
      even--;
    }
    else {
      total += even;
    }
  }
  cout << total << endl;
  return 0;
}
