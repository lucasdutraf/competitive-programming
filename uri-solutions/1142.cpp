#include <bits/stdc++.h>
using namespace std;

int main () {
  int lines, times = 1;
  cin >> lines;
  for (size_t i = 1; i < (4 * lines); i++) {
    if (times == 4) {
      cout << "PUM" << endl;
      i++;
      times = 1;
    }
    cout << i << " ";
    times++;
  }
  cout << "PUM" << endl;

  return 0;
}
