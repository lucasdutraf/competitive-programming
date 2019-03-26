#include <bits/stdc++.h>
using namespace std;

int main () {
  int lines, times = 1;
  cin >> lines;
  for (size_t i = 1; i < lines + 1; i++) {
    cout << i << " " << pow(i, 2) << " " << pow(i,3) << endl;
  }

  return 0;
}
